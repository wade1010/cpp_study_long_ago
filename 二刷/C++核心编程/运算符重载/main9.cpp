#include "iostream"

using namespace std;

//赋值运算符重载
class Person {
public:
    Person(int age) {
        m_Age = new int(age);
    }

    ~Person() {
        if (m_Age != nullptr) {
            delete m_Age;
            m_Age = nullptr;
        }
    }

    const Person &operator=(const Person &p) {
        *m_Age = *p.m_Age;
        return *this;
    }

    int *m_Age;
};

ostream &operator<<(ostream &cout, Person &p) {
    cout << *p.m_Age;
    return cout;
}

void test() {
    //如果使用有参构造函数，确保m_Age不为空
    Person p1{10};
    Person p2{20};
    Person p3{30};
    p3 = p2 = p1;
    cout << p1 << " " << p2 << " " << p3 << endl;
}

int main() {
    test();
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    c = b = a;
//    cout << a << b << c << endl;  //a =10; b=10; c=10;
    return 0;
}