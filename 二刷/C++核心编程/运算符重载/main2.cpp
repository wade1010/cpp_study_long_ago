#include "iostream"

using namespace std;

//左移运算符重载
class Person {
public:
    //利用成员函数重载 左移运算符

    //p.operator<<(cout)  简化 p<<cout
    //因此通常不会利用成员函数重载左移运算符，因为无法实现cout在左侧
//    void operator<<(Person &p) {
//
//    }

    int m_A;
    int m_B;
};

//所以只能使用全局函数重载左移运算符
//返回 ostream& 是用来做链式调用
ostream &operator<<(ostream &cout, Person &p) {//本质 operator<<(cout,p)
    cout << "m_A=" << p.m_A << " m_B=" << p.m_B;
    return cout;
}

void test() {
    Person p{1, 2};
    Person p2{3, 4};
//    cout << p;//无重载时，Invalid operands to binary expression ('std::__1::ostream' (aka 'basic_ostream<char>') and 'Person')
    cout << p << "\n" << p2 << "\n" << "hello world" << endl;
}

int main() {
    test();
    return 0;
}