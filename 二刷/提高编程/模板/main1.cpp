#include "iostream"

using namespace std;
void mySwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void mySwap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}
//利用模板提供通用的交换函数
template <typename T>
void myTSwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
void test()
{
    int a = 10;
    int b = 20;
    mySwap(a, b);
    cout << a << endl;
    cout << b << endl;
    double c = 10.2;
    double d = 20.3;
    mySwap(c, d);
    cout << c << endl;
    cout << d << endl;
}
void test2()
{
    char a = 'a';
    char b = 'b';
    // 1 自动类型推导
    myTSwap(a, b);
    cout << a << " " << b << endl;
    // 2 显示指定类型
    int c = 100;
    int d = 200;
    myTSwap<int>(c, d);
    cout << c << " " << d << endl;
}

int main()
{
    test();
    test2();
    return 0;
}