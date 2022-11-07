#include "iostream"

using namespace std;
//普通函数于模板函数调用规则
void myPrint(int a, int b)
{
    cout << "1调用的普通函数" << endl;
}
template <typename T>
void myPrint(T a, T b)
{
    cout << "2调用的模板函数" << endl;
}
template <typename T>
void myPrint(T a, T b, T c)
{
    cout << "3调用的模板函数" << endl;
}
void test1()
{
    // 1、如果函数模板和普通函数都可以实现，优先调用普通函数
    //  注意 如果告诉编译器  普通函数是有的，但只是声明没有实现，或者不在当前文件内实现，就会报错找不到
    int a = 10;
    int b = 20;
    myPrint(a, b); //调用普通函数
    // 2 可以通过空模板参数列表来强制调用模板函数
    myPrint<>(a, b);
    // 3、函数模板也可以发生重载
    int c = 30;
    myPrint(a, b, c); //调用重载的函数模板
    // 4 如果函数模板可以产生更好的匹配,有限调用函数模板
    char ch1 = 'a';
    char ch2 = 'b';
    myPrint(ch1, ch2); //调用函数模板 因为调用普通的,要发生隐式转换,所以编译器就优先调用函数模板
}
int main()
{
    test1();
    return 0;
}