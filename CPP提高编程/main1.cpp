#include "iostream"
#include "string"
#include "fstream"

using namespace std;
//函数模板


//交换两个整型交换函数
void swapInt(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

//交换两个浮点型函数
void swapDouble(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

//函数模板
template<typename T>
//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型

void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}


void test() {
    int a = 10;
    int b = 20;
    swapInt(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    double c = 10.2;
    double d = 20;
    swapDouble(c, d);
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
}

void test2() {
    //使用函数模板有两种方式
    int a = 10;
    int b = 20;
    //1 自动类型推到
    mySwap(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    //2 显示指定类型
    double c = 10.2;
    double d = 20.3;
    mySwap<double>(c, d);
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;

}

int main() {
//    test();
    test2();
    return 0;
}