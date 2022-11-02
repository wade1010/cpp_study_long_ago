#include "iostream"

using namespace std;

class Person {
public:
    static void test() {
        ma = 100;//静态成员函数 可以 访问静态成员变量
//        mb = 10;//静态成员函数 不可以 访问静态成员变量
        cout << "static void test" << endl;
    }

    static int ma;//静态成员变量
    int mb;//非静态成员变量
};

int Person::ma = 10;//必须  静态变量需要在类外初始化

void test() {
    Person p;
    p.test();
    //或者
    Person::test();
}

int main() {
    test();
    return 0;
}