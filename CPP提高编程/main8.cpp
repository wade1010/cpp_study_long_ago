#include "iostream"
#include "string"
#include "fstream"

using namespace std;

/*
 *类模板中成员函数创建时间
 *
 * 结论：类模板中成员函数在调用时才去创建
 */
class Person1 {
public:
    void showPerson1() {
        cout << "person1 show" << endl;
    }

};

class Person2 {
public:
    void showPerson2() {
        cout << "person2 show" << endl;
    }
};

template<class T>
class MyClass {
public:
    T obj;

    //类模板中成员函数
    void func1() {
        obj.showPerson1();
    }

    void func2() {
        obj.showPerson2();
    }

};


void test() {
    MyClass<Person1> m;
    m.func1();//不报错
//    m.func2();//报错
}

int main() {
    test();
    return 0;
}