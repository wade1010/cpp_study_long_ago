#include "iostream"

using namespace std;

struct Student {
    int id;
    string name;
    int age;
};


struct Teacher {
    int id;
    string name;
    int age;
    struct Student stu;
};

int main() {
    Teacher t;
    t.id = 1;
    t.age = 55;
    t.name = "力王";

    Student stu = {101, "王五", 19};
    t.stu = stu;

    cout << t.name << "老师的学生是" << t.stu.name << endl;

    return 0;
}