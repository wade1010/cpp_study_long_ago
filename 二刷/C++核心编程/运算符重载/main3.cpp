#include "iostream"

using namespace std;

//友元+重载
class Person {
    friend ostream &operator<<(ostream &cout, Person &p);

public:
    Person(int a, int b) {
        m_A = a;
        m_B = b;
    }

private:
    int m_A;
    int m_B;
};

ostream &operator<<(ostream &cout, Person &p) {
    cout << "m_A=" << p.m_A << " m_B=" << p.m_B;
    return cout;
}

void test() {
    Person p{1, 2};
    Person p2{3, 4};
    cout << p << "\n" << p2 << "\n" << "hello world" << endl;
}

int main() {
    test();
    return 0;
}