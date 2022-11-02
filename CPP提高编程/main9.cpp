#include "iostream"
#include "string"
#include "fstream"

using namespace std;

/*
 *类模板对象做函数参数
 * 1 指定传入类型  最常用
 * 2 参数模板化
 * 3 整个类模板化
 */

template<class T1, class T2>
class Person {
public:
    Person(T1 n, T2 a) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << this->name << " " << this->age << endl;
    }

    T1 name;
    T2 age;

};

//1 指定传入类型
void printPerson1(Person<string, int> &p) {
    p.showPerson();
}

void test() {
    Person<string, int> p("孙悟空", 19);
    printPerson1(p);
}

//2 参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2> &p) {
    p.showPerson();
    cout << "T1的类型为：" << typeid(T1).name() << endl;
    cout << "T2的类型为：" << typeid(T2).name() << endl;
}

void test2() {
    Person<string, int> p("猪八戒", 19);
    printPerson2(p);
}

//3 整个类模板化
template<class T>
void printPerson3(T &p) {
    p.showPerson();
}

void test3() {
    Person<string, int> p("唐僧", 30);
    printPerson3(p);
}


int main() {
    test();
    test2();
    test3();
    return 0;
}
