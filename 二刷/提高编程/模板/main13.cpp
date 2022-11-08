#include "iostream"
using namespace std;

template <class T1, class T2>
class Person;

//如果声明了函数模板，可以将实现写到后面，否则需要将实现体写到类的前面让编译器提前看到
// template <class T1, class T2>
// void showPerson2(const Person<T1, T2> &p);

//这里放到Person类的前面,就不需要上面注释的 声明函数模板
template <class T1, class T2>
void showPerson2(const Person<T1, T2> &p)
{
    cout << "age " << p.mage << " name" << p.mname << endl;
}

template <class T1, class T2>
class Person
{
    // 1 全局函数配合友元 类内实现
    friend void showPerson(const Person<T1, T2> &p)
    {
        cout << "age " << p.mage << " name" << p.mname << endl;
    }
    //全局函数配合友元  类外实现
    // friend void showPerson2(const Person<T1, T2> &p); 这是普通全局函数的友元 得加<>
    friend void showPerson2<>(const Person<T1, T2> &p);

public:
    Person(T1 name, T2 age)
    {
        this->mage = age;
        this->mname = name;
    }

private:
    int mage;
    string mname;
};

void test1()
{
    Person<string, int> p("bob", 22);
    showPerson(p);
}
void test2()
{
    Person<string, int> p("wade", 33);
    showPerson2(p);
}

//放到Person类的后面,就需要提前在类前面声明函数模板,让编译器知道
// template <class T1, class T2>
// void showPerson2(const Person<T1, T2> &p)
// {
//     cout << "age " << p.mage << " name" << p.mname << endl;
// }

int main()
{
    test1();
    test2();
    return 0;
}