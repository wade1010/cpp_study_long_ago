#include "person.h"
#include "iostream"

using namespace std;

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
