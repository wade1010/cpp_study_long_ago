#include "iostream"

using namespace std;
//类模板
template <class NameType, class AgeType = int>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
    void showPerson()
    {
        cout << "age" << this->m_Age << " name:" << this->m_Name << endl;
    }

    NameType m_Name;
    AgeType m_Age;
};
// 1 指定传入的类型
void printPerson1(Person<string, int> &p)
{
    p.showPerson();
}
void test1()
{
    Person<string, int> p("孙悟空", 1000);
    printPerson1(p);
}
// 2 参数模板化
template <typename T1, typename T2>
void printPerson2(Person<T1, T2> &p)
{
    p.showPerson();
    cout << "T1的类型为： " << typeid(T1).name() << endl;
    cout << "T2的类型为： " << typeid(T2).name() << endl;
}
void test2()
{
    Person<string, int> p("孙悟空", 1000);
    printPerson2(p);
}

// 3 整个类模板化
template <class T>
void printPerson3(T &p)
{
    p.showPerson();
    cout << "T的类型为： " << typeid(T).name() << endl;
}

void test3()
{
    Person<string, int> p("a", 100);
    printPerson3(p);
}
int main()
{
    test1();
    test2();
    test3();

    return 0;
}