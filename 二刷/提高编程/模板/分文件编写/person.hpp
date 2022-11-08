#pragma once
#include "iostream"
using namespace std;

template <class T1, class T2>
class Person
{
public:
    Person(T1 name, T2 age);
    void showPerson();

    int m_Age;
    string m_Name;
};

//构造函数 类外实现
template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_Age = age;
    this->m_Name = name;
}

//成员函数 类外实现
template <class T1, class T2>
void Person<T1, T2>::showPerson()
{
    cout << "name:" << this->m_Name << " age " << this->m_Age << endl;
}
