#include "iostream"

using namespace std;

//成员变量和成员函数是分开存储的
class Person {
public:
    int mb;//非静态成员变量  属于类的对象上
    static int ma;//静态成员变量  不属于类对象上
    void test() {}//非静态成员函数 不属于类对象上
    static void test2() {}//静态成员函数 不属于类对象上
};

int Person::ma = 10;//必须  静态变量需要在类外初始化

void test() {
    Person p;
    cout << "sizeof p=" << sizeof(p) << endl;
}

int main() {
    test();
    return 0;
}