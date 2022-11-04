#include "iostream"

using namespace std;

//加好运算符重载
//1 成员函数重载+号
//2 全局函数重载+号

class Person {
public:
    int m_A;
    int m_B;

    //1 成员函数重载+号
//    Person operator+(Person &p) const {
//        Person temp{};
//        temp.m_A = this->m_A + p.m_A;
//        temp.m_B = this->m_B + p.m_B;
//        return temp;
//    }

    Person operator+(int a) const {
        return {this->m_A + a, this->m_B + a};
    }
};

Person operator+(Person &p1, Person &p2) {
    return {p1.m_A + p2.m_A, p1.m_B + p2.m_B};
    //等同于下面
//    Person temp{p1.m_A + p2.m_A, p1.m_B + p2.m_B};
//    return temp;
}

//成员函数重载+号
void test1() {
    Person p1{10, 10};
    Person p2{20, 20};
//    Person p3 = p1 + p2;//没重载运算符之前报错 Invalid operands to binary expression ('Person' and 'Person')
    Person p3 = p1 + p2;//本质是Person p3 = p1.o perator+(p2);
    cout << p3.m_A << " " << p3.m_B << endl;
}

//全局函数重载+号
void test2() {
    Person p1{10, 10};
    Person p2{20, 20};
    Person p3 = p1 + p2;//本质是Person p3 = operator+(p1, p2);
    cout << p3.m_A << " " << p3.m_B << endl;
}

Person operator+(Person &p, int a) {
    return {p.m_A + a, p.m_B + 10};
}

//运算符重载发生函数重载
void test3() {
    Person p1{10, 10};
    Person p2 = p1 + 10;//
    cout << p2.m_A << " " << p2.m_B << endl;
}

int main() {
    //test1();
//    test2();
    test3();
    return 0;
}