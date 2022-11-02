#include "iostream"

using namespace std;

//交换函数
//1 值传递
void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
//2 地址传递

void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//3 引用传递

void swap3(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;
//    swap1(a, b);
//    swap2(&a, &b);
    int &aa = a;
    int &bb = b;
    swap3(aa, bb);

    //或者直接传，接受那里会变成引用
    swap3(a, b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}
