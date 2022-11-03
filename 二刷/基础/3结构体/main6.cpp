#include "iostream"

using namespace std;
struct Student {
    string name;
};

//将函数的形参改为指针，可以减少内存空间，而且不会复制性的副本出来
void printInfo(const struct Student *const stu) {
//    stu->name = "aa";//编译报错 有const修饰
    cout << stu->name << endl;
}

int main() {
    struct Student s = {"张三"};
    printInfo(&s);
    return 0;
}