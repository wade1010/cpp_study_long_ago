#include "iostream"
#include "string"
#include "fstream"

using namespace std;
//函数模板注意是想
/*
 * 1 自动类型推到  必须推导出一致的数据类型T才可以使用
 *
 * 2 模板必须要确定出T的数据类型，才可以使用
 *
 */

//typename 可以替换成class
template<class T>

void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

//1 自动类型推到  必须推导出一致的数据类型T才可以使用
void test() {
    int a = 10;
    int b = 20;
    mySwap(a, b);//正确

    char c = 'a';
//    mySwap(a, c);//错误；必须推导出一致的数据类型T才可以使用
}

//template<typename T>//如果是注释的，test2是可以调用func();的
template<typename T>//如果是没注释的，test2是不可以调用func();的，因为模板必须没有确定出T的数据类型，需要显示指定类型调用  func<int>();
void func() {
    cout << "func 调用" << endl;
}

void test2() {
//    func();
    func<int>();
}
int main() {
//    test();
    test2();
    return 0;
}