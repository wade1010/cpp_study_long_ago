#include "iostream"

using namespace std;

int main() {
    //1 const 修饰指针  常量指针
    int a = 10;
    int b = 20;
    const int *p = &a;
    //指针指向的值不可以修改，指针的指向可以改
//    *p = 100; //编译报错 error: assignment of read-only location '* p'
    cout << *p << endl;//10
    p = &b;//正确
    cout << *p << endl;//20


    //2 const修饰常量   指针常量
    //指针的指向不可以改，指针指向的值可以改
    int *const p2 = &a;
    *p2 = 100;//正确
//    *p2 = &b;//错误 指针的指向不可以修改

    //3 const 修饰指针和常量
    const int *const p3 = &a;
//    *p3 = 100;//编译错误 main.cpp:25:9: error: assignment of read-only location '*(const int*)p3'
//    p3 = &b//编译错误 main.cpp:26:8: error: assignment of read-only variable 'p3'
    return 0;
}