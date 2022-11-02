#include "string"
#include "iostream"

using namespace std;


//添加一个Person 声明 3
template<typename T1, typename T2>
class Person;

//2 全局函数在类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {//需要让编译器知道有一个Person类的存在 2
    cout << p.name << " " << p.age << endl;
}

template<typename T1, typename T2>
class Person {
public:
    //全局函数 类内实现
    friend void printPerson(Person<T1, T2> p) {
        cout << p.name << " " << p.age << endl;
    }

    //全局函数类外实现
//    friend void printPerson2(Person<T1, T2> p);//这样会有问题，这是个普通函数，而外部实现是个函数模板的函数实现，不是一套东西
    //加一个空模板参数列表，需要把类外实现放到Person类之前 1
    friend void printPerson2<>(Person<T1, T2> p);

    Person(T1 n, T2 a) {
        this->name = n;
        this->age = a;
    }

private:
    T1 name;
    T2 age;

};

//1 全局函数在类内实现
void test() {
    Person<string, int> p("tom", 30);
    printPerson(p);
}

////2 全局函数在类外实现
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p) {
//    cout << p.name << " " << p.age << endl;
//}

void test2() {
    Person<string, int> p("jerry", 30);
    printPerson2(p);
}

int main() {
//    test();
    test2();
    return 0;
}