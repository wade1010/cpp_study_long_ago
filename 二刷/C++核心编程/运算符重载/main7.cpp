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

    void operator=(const Person &p) {
        *m_Age = *p.m_Age;
    }

    int *m_Age;
};

void test() {
    //如果使用有参构造函数，确保m_Age不为空
    Person p{20};
    Person p2{10};
    cout << "p年龄为：" << *p.m_Age << endl;
    cout << "p2年龄为：" << *p2.m_Age << endl;
    p2 = p;//堆区内存重复释放
    cout << "p年龄为：" << *p.m_Age << endl;
    cout << "p2年龄为：" << *p2.m_Age << endl;
}

int main() {
    test();
    return 0;
}