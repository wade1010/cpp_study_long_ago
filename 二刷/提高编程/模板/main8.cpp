#include "iostream"

using namespace std;
//类模板
template <class NameType, class AgeType = int>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
    void showPerson()
    {
        cout << " age: " << this->age << " name: " << this->name << endl;
    }
    NameType name;
    AgeType age;
};
// 1 类模板没有自动类型推导的使用方式
void test1()
{
    // Person p("孙悟空", 1000);错误 类模板使用时候 不可以用自动类型推导
    Person<string, int> p("孙悟空", 1000);
    p.showPerson();
}
// 2 类模板在模板参数列表中可以有默认参数
void test2()
{
    Person<string> p("猪八戒", 999); //类模板中的模板参数列表 可以指定默认参数
    p.showPerson();
}
int main()
{
    test1();
    test2();
    return 0;
}