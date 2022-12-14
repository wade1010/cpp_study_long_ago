#include "iostream"

using namespace std;
class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};
//普通函数模板
template <class T>
bool myCompare(T &a, T &b)
{
    return a == b;
}
//具体化,显示具体化的原型和以template<>开头,并通过名称来指出类型
//具体优化于常规模板
template <>
bool myCompare(Person &p1, Person &p2)
{
    return p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name;
}

void test1()
{
    int a = 10;
    int b = 20;
    //内置数据类型可以直接使用通用的函数模板
    bool ret = myCompare(a, b);
    if (ret)
    {
        cout << "a==b" << endl;
    }
    else
    {
        cout << "a!=b" << endl;
    }
}

void test2()
{
    Person p1("Tom", 10);
    Person p2("Tom", 10);
    bool ret = myCompare(p1, p2);
    if (ret)
    {
        cout << "p1==p2" << endl;
    }
    else
    {
        cout << "p1!=p2" << endl;
    }
}
int main()
{
    test1();
    test2();
    return 0;
}