#include "iostream"

using namespace std;

class Student {
public:
    string name;
protected:
    string car;
private:
    string password;
public:
    void init() {
        name = "fadfad";
        car = "car";
        password = "a123412";
    }
};

int main() {
    Student stu;
    stu.init();
    stu.name = "1";
//    stu.car = "1";//保护权限,在类外部访问不到
//    stu.password = "1";//私有权限,在类外部访问不到
    return 0;
}