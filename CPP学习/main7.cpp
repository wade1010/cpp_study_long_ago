#include "iostream"

using namespace std;

void test1();//函数声明可以多次
void test1();//函数声明可以多次，函数定义只能一次

int main() {
    test1();
    return 0;
}

void test1() {//函数定义只能一次
    cout << "test1" << endl;
}