#include "iostream"

using namespace std;
struct Student {
    string name;
};

void printInfo(struct Student s) {
    cout << "printInfo，姓名：" << s.name << endl;
}

void printInfo2(struct Student *p) {
    cout << "printInfo2，姓名：p->name:" << p->name << endl;
    cout << "printInfo2，姓名：(*p).name:" << (*p).name << endl;
}

int main() {
    Student s = {"张三"};
    printInfo(s);
    printInfo2(&s);
    return 0;
}