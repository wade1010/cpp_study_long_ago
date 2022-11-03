#include "iostream"

using namespace std;

//如果函数声明有默认参数，函数实现就不能有默认参数
//其实就是声明和实现,对应的参数只能有一处有默认参数
int func(int a, int b = 10, int c = 20);

//int func(int a, int b = 10, int c = 20) {报错
int func(int a, int b, int c) {
    return a + b + c;
}

//其实就是声明和实现,对应的参数只能有一处有默认参数
int func2(int a, int b, int c = 20);

int func2(int a, int b = 10, int c) {
    return a + b + c;
}

int main() {
    int sum = func(1, 2);
    cout << sum << endl;

    int sum2 = func2(1, 2);
    cout << sum2 << endl;
    return 0;
}