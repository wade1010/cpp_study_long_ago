#include "iostream"

using namespace std;

int *test(int b) {//形参也会放在栈区
    int a = 10;//局部变量，内存放在栈区，栈区的数据在函数执行完成后自动释放
    return &a;//返回局部变量的地址
}

int main() {
    int *p = test(10);
    cout << *p << endl;//第一次可以正常打印结果，是因为编译器做了保留
    cout << *p << endl;//第二次这个数据就不再保留
    return 0;
}

/*
10
32767

 所以不要返回局部变量的地址
*/