#include "iostream"

using namespace std;

/*
 * 函数重载的注意是想
 * 1 引用作为重载的条件
 *
 * 2 函数重载遇到默认参数
 */

void test(int &b) {   // int &b=10; 不合法
    cout << "int &b调用" << endl;
}


void test(const int &b) { // const int &b=10; 合法 编译器会自动转换，相当于 int temp=10;const int &b=temp;
    cout << "const   int &b调用" << endl;
}

//2 函数重载遇到默认参数
void func2(int a, int b) {
    cout << "func2 int a 调用" << endl;
}

void func2(int a) {
    cout << "func2 int a 调用" << endl;
}

void func3(int a, int b = 10) {
    cout << "func3 int a 调用" << endl;
}

void func3(int a) {
    cout << "func3 int a 调用" << endl;
}

int main() {
    int a = 10;
    test(a);
    const int b = 11;
    test(b);
    test(12); // const int &b=10; 合法 编译器会自动转换，相当于 int temp=10;const int &b=temp;

//    2 函数重载遇到默认参数
    func2(10);//没有默认值，编译器知道调用哪一个
//    func3(10);//报错，编译器不知道到底调用哪个？，当函数碰到默认参数，出现二义性，报错，尽量避免这种情况
    func3(10, 20);//这个没问题，编译器能找到


    return 0;
}

//int &b调用
//const   int &b调用
//const   int &b调用
//func2 int a 调用
//func3 int a 调用