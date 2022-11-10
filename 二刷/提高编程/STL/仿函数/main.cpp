#include "iostream"

using namespace std;

//函数对象（仿函数）

//1 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
class MyAdd {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};

void test() {
    MyAdd ma;
    cout << ma(11, 22) << endl;
    cout << MyAdd()(1, 2) << endl;

}

//2 函数对象超出普通函数的概念，函数对象可以有自己的状态
class MyPrint {
public:
    MyPrint() {
        num = 0;
    }

    void operator()(string str) {
        cout << str << endl;
        num++;
    }

    int num;//内部自己状态
};

void test2() {
    MyPrint mp;
    mp("hello world");
    mp("hello world");
    mp("hello world");
    mp("hello world");
    mp("hello world");
    cout << "打印次数:" << mp.num << endl;
}

//3 函数对象可以作为参数传递
void doPrint(MyPrint &mp, string str) {
    mp(str);
}

void test3() {
//正确
    MyPrint mp;
    doPrint(mp, "hello world");

//错误
/*
error: cannot bind non-const lvalue reference of type 'MyPrint&'
to an rvalue of type 'MyPrint'


&MyPrint(); error: taking address of rvalue [-fpermissive]
*/
//    doPrint(MyPrint(), "hello world");

//错误
//error: expected primary-expression before ',' token
//    doPrint(MyPrint, "hello world");
}

int main() {
    test();
    test2();
    test3();
    return 0;
}