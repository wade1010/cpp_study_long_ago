#include "iostream"

using namespace std;

void printInfo(int &val) {
    val = 101;
    cout << val << endl;
}

void printInfo2(const int &val) {
//    val = 101;//不能修改
    cout << val << endl;
}

int main() {
    //常量引用
    //使用场景：用来修饰形参，防止误操作

    int a = 10;
    int &ref1 = a;//对的
//    int &ref2 = 10;//错误 引用必须引一块合法的内存空间

    //对的，加上const之后，编译器将代码修改 int temp = 10; const int &ref3 =temp;
    const int &ref3 = 10;
    ref1 = 20;//可以修改
//    ref3 = 20;//不可以修改，加入const之后变成只读，不可以修改


    int b = 100;
    printInfo(b);
    cout << b << endl;//变成了101，被修改了
    cout << endl;
    int b2 = 100;
    printInfo2(b2);
    cout << b2 << endl;//不变

    return 0;
}