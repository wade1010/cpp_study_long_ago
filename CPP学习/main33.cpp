#include "iostream"
#include "string"

using namespace std;


//加号运算符重载

class Person {
public:
    int m_A;
    int m_B;

};

//2 全局函数 加号运算符重载
Person operator+(Person &p1, Person &p2) {
    Person tmp;
    tmp.m_A = p1.m_A + p2.m_A;
    tmp.m_B = p1.m_B + p2.m_B;
    return tmp;
}

//函数重载的版本
Person operator+(Person &p1, int num) {
    Person tmp;
    tmp.m_A = p1.m_A + num;
    tmp.m_B = p1.m_B + num;
    return tmp;
}

void test();

int main() {
    test();
    return 0;
}

void test() {
    Person p1;
    p1.m_A = 10;
    p1.m_B = 20;
    Person p2;
    p2.m_A = 10;
    p2.m_B = 20;
    //运算符重载 也可以发生函数重载
    Person p4 = p1 + 10;
    cout << p4.m_A << "  " << p4.m_B << endl;
}


//1 成员函数 加号运算符重载


//2 全局函数 加号运算符重载


