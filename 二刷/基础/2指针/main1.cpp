#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
    //1定义一个指针
    int a = 10;
    //指针定义的语法：数据类型 * 指针变量名;
    int *p;
    //让指针记录变量a的地址
    p = &a;
    cout << "a的地址为：" << &a << endl;
    cout << "指针p为：" << p << endl;

    //2 使用指针
    //可以通过解引用的方式来找到指针指向的内存
    //指针前加一个*，代表解引用，找到指针指向的内存中的数据
    *p = 1000;
    cout << "a为：" << a << endl;
    cout << "*p为：" << *p << endl;
    return 0;
}
