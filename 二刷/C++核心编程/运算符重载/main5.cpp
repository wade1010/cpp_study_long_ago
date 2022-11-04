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

    //重置后置++运算符   ！！！！！！之前学习的占位符终于找到用武之地了
    //返回值用const修饰，他能防止一些问题，例如： (p++)++
    const MyInteger operator++(int) {//int 代表占位参数，可以用于区分前置和后置递增，这里只能是int，double等不好使
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }

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
//    cout << ++(++mi) << endl;
    cout << mi++ << endl;//输出0   //返回值用const修饰，他能防止一些问题，例如： (p++)++
    cout << mi << endl;//输出1
}

int main() {
    test();
    return 0;
}