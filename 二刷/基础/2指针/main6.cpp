#include "iostream"

using namespace std;

void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    //1 指针和函数
    //1 值传递
    int a = 10;
    int b = 20;
    swap1(a, b);//实参不发生改变
    cout << a << endl;
    cout << b << endl;
    cout << "" << endl;
    //2 地址传递
    swap2(&a, &b);//实参发生改变
    cout << a << endl;
    cout << b << endl;
    return 0;
}