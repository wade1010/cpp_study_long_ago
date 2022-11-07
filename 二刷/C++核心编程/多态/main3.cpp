#include "iostream"

using namespace std;

//纯虚函数和抽象类
class Base {
public:
    //纯虚函数
    //只要有一个纯虚函数，这个类就称为抽象类
    //抽象类特点：
    //1 无法实例化对象
    //2 抽象类的子类，必须重写父类中的纯虚函数，否则也属于抽象类
    virtual void func() = 0;
};

class Son : public Base {
public:
    void func() {
        cout << "son func函数调用" << endl;
    }
};

class Son2 : public Base {
public:
    void func() {
        cout << "son2 func函数调用" << endl;
    }
};

void test() {
//    Base b;//抽象类时无法实例化对象
//    new Base;//抽象类时无法实例化对象

//Son s;//子类必须重写父类中的纯虚函数，否则无法实例化对象

    Base *base = new Son;
    base->func();
    Base *base2 = new Son2;
    base2->func();
}

int main() {
    test();
    return 0;
}