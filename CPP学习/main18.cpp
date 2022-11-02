#include "iostream"

using namespace std;

class Student {
public:
    string name;
    int id;

    void showStudent() {
        cout << "姓名:" << name << "id:" << id << endl;
    }

};

int main() {
    Student stu;
    stu.name = "bob";
    stu.id = 12321;
    stu.showStudent();
    return 0;
}