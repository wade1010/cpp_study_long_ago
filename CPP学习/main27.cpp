#include "iostream"

using namespace std;

//1 解决名称冲突

class Person {
public:
    Person(int age) {
        //age = age;
        //this 指针指向 被调用的成员函数 所属的对象
        this->age = age;
    }

    Person *addAge(int age) {
        this->age += age;
        return this;
    }

    Person &addAge2(int age) {
        this->age += age;
        return *this;
    }

    Person addAge3(int age) {
        this->age += age;
        return *this;
    }

    int age;
};

void test() {
    Person p(18);
    cout << "age=" << p.age << endl;
}

int main() {
//    test();
    Person p(10);
    p.addAge(10)->addAge(10);
    cout << p.age << endl;

    Person p2(10);
    p2.addAge2(10).addAge2(10);
    cout << p2.age << endl;

    Person p3(10);
    //调用第一次后返回的是个p3的拷贝，所以第一次调用后，再调用都不是本体操作，所以p3.age=20
    p3.addAge3(10).addAge3(10).addAge3(10);
    cout << p3.age << endl;
    return 0;
}