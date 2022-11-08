#include "iostream"
using namespace std;
//类模板中成员函数类外实现
template <class T1, class T2>
class Person
{
public:
    //成员函数类内声明
    Person(T1 name, T2 age);
    void showPerson();
    T1 m_Name;
    T2 m_Age;
};
//构造函数 类外实现
template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    m_Name = name;
    m_Age = age;
}

//成员函数 类外实现
template <class T1, class T2>
void Person<T1, T2>::showPerson()
{
    cout << "show person" << endl;
}

void test()
{
    Person<string, int> p("孙武", 100);
    p.showPerson();
}
int main()
{
    test();
    return 0;
}