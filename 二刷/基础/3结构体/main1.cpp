#include "iostream"

using namespace std;

//1 创建学生数据类型：学生包括 姓名 年龄 分数
//自定义数据类型 一些类型集合组成的一个类型
//语法  struct 类型名称 {成员列表}
struct Student {
    //成员列表
    string name;
    int age;
    double score;
};
//2 通过学生类型创建具体学生
//2.1 struct Student stu;
//2.2 struct Student stu2={name:""}
//2.3 在定义结构体的时候顺便创建结构体变量

//3 struct 关键字创建的时候可以省略  定义的时候不可以省略

int main() {
    //2 通过学生类型创建具体学生
//2.1 struct Student stu;
//    struct Student stu1;
    Student stu1;//省略 同上
    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 100;
    cout << "姓名：" << stu1.name << " 年龄:" << stu1.age << " 分数:" << stu1.score << endl;
//2.2 struct Student stu2={name:""}
//    struct Student stu2 = {
//            name:"李四",
//            age:20,
//            score:99
//    };
//    上面的省略写法如下
    struct Student stu2 = {
            "李四",
            20,
            99
    };
    cout << "姓名：" << stu2.name << " 年龄:" << stu2.age << " 分数:" << stu2.score << endl;

//2.3 在定义结构体的时候顺便创建结构体变量
    struct StudentDemo {
        string name;
        int age;
        double score;
    } stu3;//在定义结构体的时候顺便创建结构体变量

    stu3.name = "王五";
    stu3.age = 21;
    stu3.score = 81;
    cout << "姓名：" << stu3.name << " 年龄:" << stu3.age << " 分数:" << stu3.score << endl;
    return 0;
}