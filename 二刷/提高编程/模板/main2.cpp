#include "iostream"

using namespace std;
template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
// 1、自动类型推导，必须推导出一致的数据类型T,才可以使用
void test()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    mySwap(a, b); //正确,可以推导出一致的T
    // mySwap(a, c); //错误,推导不出一致的T
}

// 2、模板必须要确定出T的数据类型，才可以使用
template <class T>
void func()
{
    cout << "func call" << endl;
}

void test1()
{
    // func();//错误 模板不能独立使用,必须确定出T的类型
    func<int>();    //利用显示置顶烈性的方式,给T一个类型,才可以使用改=该模板
    func<double>(); //也可以
}
int main()
{
    test();
    test1();
    return 0;
}