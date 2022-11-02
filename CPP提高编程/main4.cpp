#include "iostream"
#include "string"
#include "fstream"

using namespace std;

/*
 *普通函数与函数模板掉好用规则
 * 1  如果函数模板和普通函数可以调用，优先调用普通函数
 * 2 可以通过空模板参数列表，强制调用 函数模板
 * 3 函数模板可以发生函数重载
 * 4 如果函数模板可以产生更好的匹配 优先调用函数模板
 */

void myPrint(int a, int b) {
    cout << "调用普通函数" << endl;
}

template<class T>
void myPrint(T a, T b) {
    cout << "2个参数 调用函数模板" << endl;
}

template<class T>
void myPrint(T a, T b, T c) {
    cout << "3个参数 调用函数模板" << endl;
}

void test() {
    int a = 10;
    int b = 20;
//    myPrint(a, b);

    //通过空模板参数列表，强制调用函数模板
//    myPrint<>(a, b);
//    myPrint<>(a, b, 30);

    //如果函数模板可以产生更好的匹配 优先调用函数模板,这里编译器觉得发生隐式转换还不如自动类型推导
    char c1 = 'a';
    char c2 = 'b';
    myPrint(c1, c2);
}

int main() {
    test();
    return 0;
}