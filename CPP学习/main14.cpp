#include "iostream"

using namespace std;

//1引用做函数的返回值
int &test1() {
    int a = 10;//局部变量存放在四区中的 栈区
    return a;
}

//2 函数的调用作为左值(等号的左边 )
int &test2() {
    static int a = 10;
    return a;
}

int main() {

    int &ref = test1();
    cout << "ref=" << ref << endl;//第一次打印结果正确，因为编译器做了一次保留
    cout << "ref=" << ref << endl;//第二次结果错误，a的内存已经释放


//    2

    int &ref2 = test2();
    cout << ref2 << endl;//结果为10
    cout << ref2 << endl;//结果为10

    //作为左值
    test2() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值

    cout << ref << endl;//结果为1000
    cout << ref << endl;//结果为1000

    return 0;
}