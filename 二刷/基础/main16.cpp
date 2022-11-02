#include "iostream"

using namespace std;

//函数的声明
//比较函数,实现两个整型数字进行标胶,返回较大的值

//提前告诉编译器函数的存在,可以利用函数的声明
int get_max(int a, int b);
//声明可以写多次,但是定义只能有一次
int get_max(int a, int b);
int get_max(int a, int b);

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    cout << get_max(a, b) << endl;
    return 0;
}

//定义
int get_max(int a, int b)
{
    return a > b ? a : b;
}