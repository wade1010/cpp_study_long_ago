#include "iostream"

using namespace std;

class Student {
    int age;//默认私有
};

struct Teacher {
    int age;//默认公共
};


int main() {
    Student stu;
    Teacher t;
//    stu.age = 1;//报错
    t.age = 1;
    return 0;
}