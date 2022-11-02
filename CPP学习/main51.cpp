#include "iostream"
#include "string"

using namespace std;

//纯虚函数和抽象类

class Base {
public:
    //纯虚函数
    //只要有一个纯虚函数，这个类成为抽象类
    //抽象类特点：
    //1、无法实例化
    //2、抽象类的子类 必须要重写父类中的纯虚函数 否则也属于抽象类
    virtual void func() = 0;

};

class Son : public Base {
public:
    void func() {
        cout << "Son func 调用" << endl;
    }
};

void test() {
//    Base b;//报错  Variable type 'Base' is an abstract class
    //new Base;//堆区也报错  Variable type 'Base' is an abstract class

    Son s;//不报错 抽象类的子类 必须要重写父类中的纯虚函数 否则也属于抽象类
    s.func();
    Base *base = new Son();
    base->func();
    Base &b = *new Son();
    b.func();
}

int main() {
    test();
    return 0;
}