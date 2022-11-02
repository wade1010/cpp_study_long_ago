#include "iostream"

using namespace std;

int main() {
    int a = 10;
    //创建引用
    int &b = a;
    cout << a << endl;
    cout << b << endl;

    b = 100;
    cout << a << endl;
    cout << b << endl;
    return 0;
}

/*
10
10
100
100
 */