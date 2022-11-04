#include "iostream"

using namespace std;

class Student {
public:
    int m_id;
    string m_name;

    void show() {
        cout << "学号：" << m_id << " 姓名：" << m_name << endl;
    }
};

int main() {
    Student s;
    s.m_id = 10;
    s.m_name = "真是";
    s.show();
    return 0;
}