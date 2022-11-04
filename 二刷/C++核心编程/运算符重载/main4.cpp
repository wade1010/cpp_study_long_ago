#include "iostream"

using namespace std;

//递增运算符重载
//自定义整型
class MyInteger {
    friend ostream &operator<<(ostream &cout, MyInteger mi);

public:
    MyInteger() {
        m_Num = 0;
    }

    //重置前置++运算符  返回引用是为了对同一个数进行操作
    MyInteger &operator++() {//这里不能返回值MyInteger 必须返回MyInteger&  因为操作的需要是都一个对象，返回值就是拷贝了
        //先进行++运算
        m_Num++;
        //再将自身作返回
        return *this;
    }
    //重置后置++运算符

private:
    int m_Num;
};

//重载左移运算符
ostream &operator<<(ostream &cout, MyInteger mi) {
    cout << mi.m_Num;
    return cout;
}

void test() {
    MyInteger mi;
    cout << ++(++mi) << endl;//C++里面原生的前置递增可以链式调用，后置递增不可以链式调用
}

int main() {
//    test();
    //C++里面原生的前置递增可以链式调用，后置递增不可以链式调用
    int a = 0;
    ++(++a);
    cout << a << endl;//输出2
    return 0;
}