#include "iostream"

using namespace std;

//1 不要返回局部变量的引用
//int &test1() {//编译器有 warning   reference to local variable 'a' returned [-Wreturn-local-addr]
//    int a = 10;//局部变量放在四区中的栈区
//    return a;
//}

//2 函数的调用可以作为左值
int &test2() {
    static int a = 10;
    return a;
}

int main() {
    //引用做函数的返回值
//    int &ref = test1();//报错
//    cout << ref << endl;//报错
    int &ref = test2();
    cout << ref << endl;
    cout << ref << endl;
    cout << ref << endl;

    test2() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
    cout << ref << endl;//ref是别名
    cout << ref << endl;
    cout << ref << endl;

    return 0;
}