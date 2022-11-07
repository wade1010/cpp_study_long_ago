#include "iostream"

using namespace std;
template <class NameType, class AgeType>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        m_Name = name;
        m_Age = age;
    }
    void showPerson()
    {
        cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
    }
    NameType m_Name;
    AgeType m_Age;
};
void test1()
{
    //置顶NameType 为string类型 AgeType 为 int 类型
    Person<string, int> p1("孙悟空", 1000);
    p1.showPerson();
}

void test2()
{
}
int main()
{
    test1();
    test2();
    return 0;
}