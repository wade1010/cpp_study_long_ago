#include "iostream"
#include "string"
#include "fstream"

using namespace std;

/*
 * 类模板成员函数类外实现
 */
template<class T1, class T2>
class Person {
public:
    Person(T1 n, T2 a);

    void showPerson();

    T1 name;
    T2 age;
};

//构造函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 n, T2 a) {
    this->name = n;
    this->age = a;
}

//成员函数类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson() {
    cout << this->name << " " << this->age << endl;
}


void test() {
    Person<string, int> p("tom", 20);
    p.showPerson();

}

int main() {
    test();
    return 0;
} 