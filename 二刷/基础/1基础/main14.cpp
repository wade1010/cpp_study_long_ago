#include "iostream"

using namespace std;

//函数的定语
//语法:
//返回值类型 函数名(参数列表){函数体语句 return表达式}

//加法函数,实现两个整型的相加,并返回相加结果

int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    //实现一个加法函数,功能是,传入两个整型数据,计算数据相加的结果,并返回
    // 1 返回值类型 int
    // 2 函数名    add
    // 3 参数列表   (int num1,int num2)
    // 4 函数体语句   int sum = num1+num2;
    // 5 return 表达式  return sum;

    int sum = add(1, 2);
    cout << sum << endl;
    return 0;
}