#include "iostream"

using namespace std;

//重载关系运算符
class Person {
public:
    Person(string name, int age) {
        m_age = age;
        m_name = name;
    }

    bool operator==(const Person &p) const {
        return m_name == p.m_name && m_age == p.m_age;
    }

    bool operator!=(const Person &p) const {
        return !(*this == p);
    }

    string m_name;
    int m_age;
};

void test() {
    Person p1{"zs", 20};
    Person p2{"zs2", 20};
    if (p1 == p2) {
        cout << "相等" << endl;
    } else {
        cout << "不相等" << endl;
    }

    if (p1 != p2) {
        cout << "不相等" << endl;
    } else {
        cout << "相等" << endl;
    }

}

int main() {
    test();
    return 0;
}