#include "iostream"

using namespace std;

/*
 * 1 构造函数的分类及调用
 * 分类
 * 按照参数分类  无参构造(默认构造)和有参构造
 * 按照类型分类  普通构造  拷贝构造
 */
class Student {
public:
    int age;

    Student() {
        cout << "普通" << endl;
    }

    Student(int a) {
        cout << "有参数构造函数" << endl;
    }

    //拷贝构造函数 将传入的对象上面的属性拷贝到此类上
    Student(const Student &s) {
        age = s.age;
    }

    ~Student() {
        cout << "析构函数" << endl;
    }
};

//调用
void test01() {
    //1 括号法
    Student stu;// 默认构造函数调用
    Student stu2(10); //有参数构造函数
}

int main() {

    test01();
    return 0;
}