#include "iostream"

using namespace std;

//常函数
class Person {
public:
    //this指针的本质是 指针常量  指针的指向是不能改的  相当于Person * const this
    //如果想限定this指针指向的值也不能修改，就得类似于 const Person * const this,此时这个const加在哪里呢？最终决定加在函数()后面
    //在成员函数后面加const,修饰的是this指向，让指针指向的值也不可以修改
    void showPerson() const {
//        this = NULL;//加不加const,this指针是不可以修改指针的指向的
//        m_A = 100;//加了const就不能修改指针指向的值
        cout << m_A << endl;
    }

    int m_A;

    void showNormal() {

    }
};

//常函数
class Person2 {
public:
    //this指针的本质是 指针常量  指针的指向是不能改的  相当于Person * const this
    //如果想限定this指针指向的值也不能修改，就得类似于 const Person * const this,此时这个const加在哪里呢？最终决定加在函数()后面
    //在成员函数后面加const,修饰的是this指向，让指针指向的值也不可以修改
    void showPerson() const {
//        this = NULL;//加不加const,this指针是不可以修改指针的指向的
//        m_A = 100;//加了const就不能修改指针指向的值
        m_B = 100;//或this->m_B=100;
        cout << m_B << endl;
    }

    void showNormal() {

    }

    int m_A;
    mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
};

void test1() {
    Person p;
    p.showPerson();// 0
    p.showNormal();//不报错
    Person2 p2;
    p2.showPerson();// 100
    p2.showNormal();//不报错
}

//常对象
//常对象只能调常函数，不可以调用普通成员函数，因为普通成员函数是可以修改属性的。
// 可以这么理解，如果普通函数里面修改m_A，如 m_A=100，那么如果能调用普通函数就会修改m_A,所以不允许
void test2() {
//    const Person p;//视频里是这样的，不报错。新版的报错， 'const class Person' has no user-provided default constructor
    const Person p{};//新版得这样声明 可以发现test1中不报（但是有warning），但是加了const就报错。
//    p.m_A = 100;//报错
//    p.showNormal();//报错

    const Person2 p2{};
//    p2.m_A = 100;//报错
    p2.m_B = 100;//不报错
//    p2.showNormal();//报错
}

int main() {
//    test1();
    test2();
    return 0;
}