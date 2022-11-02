#include "iostream"

using namespace std;

//函数重载
//可以让函数名相同，提高复用性

/*
 * 重载满足条件
 * 1、同一个作用域,下面代码都是在全局作用域
 * 2、函数名称相同
 * 3、函数参数类型不同，或者个数、顺序不同
 */
void test(int a) {
    cout << "test的 int 调用" << endl;
}

void test(double b) {
    cout << "test的 double 调用" << endl;
}

void test(float b) {
    cout << "test的 float 调用" << endl;
}

int main() {
    test(1);
    test(0.3);
    test(float(0.3));
    return 0;
}