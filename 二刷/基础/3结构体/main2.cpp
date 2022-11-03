#include "iostream"

using namespace std;

struct Student {
    string name;
};

int main() {
    //结构体数组
//    struct Student stu[3] = {
//            Student{"hello1"},
//            Student{"hello2"},
//            Student{"hello3"},
//    };
//省略写法如下
    struct Student stu[3] = {
            {"hello1"},
            {"hello2"},
            {"hello3"},
    };
    cout << "修改前的姓名：" << stu[2].name << endl;
    stu[2].name = "xiugai";
    cout << "修改后的姓名：" << stu[2].name << endl;
    for (int i = 0; i < 3; i++) {
        cout << "姓名:" << stu[i].name << endl;
    }
    return 0;
}