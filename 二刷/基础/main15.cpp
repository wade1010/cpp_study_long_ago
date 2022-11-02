#include "iostream"

using namespace std;

//值传递
//定义函数,实现两个数字进行交换函数

//如果函数不需要返回值,声明的时候可以写void

void swap(int num1, int num2)
{
    cout << "交换前:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    // return;返回值void的时候可以不写return
}
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    cout << "交换前:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(a, b);
    cout << "交换后:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
