#include "iostream"

using namespace std;
//结构体指针
struct Student {
    string name;
    int age;
    int score;
};

int main() {
    //创建学生结构体
    Student stu = {"张三", 31, 100};
    //通过指针指向结构体变量
//    struct Student *p = &stu;
//省略写法如下
    Student *p = &stu;
    //通过指针访问结构体变量中的数据
    cout << p->name << " " << p->age << " " << p->score << endl;
    return 0;
}