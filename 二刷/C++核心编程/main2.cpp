#include "iostream"

using namespace std;

//1 引用必须要初始化
//int &b;//错误的
//2 引用一旦初始化后，就不可以更改引用

int main() {
    int a = 10;

//1 引用必须要初始化
//int &b;//错误的
    int &b = a;
//2 引用一旦初始化后，就不可以更改了
    int c = 20;
    b = c;//赋值操作，而不是更改引用
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}