#include "iostream"

using namespace std;

int *test() {
    //利用new关键字，可以将数据开辟到堆区
    //指针 本质也是局部变量，放在栈上，指针保存的数据时放到堆区
    int *p = new int(10);
    return p;
}

int main() {
    int *p = test();
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}

/*
10
10
*/