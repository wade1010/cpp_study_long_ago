#include "iostream"
#include "string"
#include "fstream"

using namespace std;

/*
 * 模板的局限性
 *  模板并不是万能的，有些特定数据类型，徐亚用具体化方式做特殊实现
 *
 */

class Person {
public:
    Person(int a, string n) {
        age = a;
        name = n;
    }

    int age;
    string name;


};

template<typename T>
bool myCompare(T &a, T &b) {
    return a == b;
}

//利用具体化的Person的版本实现代码，具体优化优先调用  (格式化后就换行了)
template<>
bool myCompare(Person &p1, Person &p2) {
    if (p1.age == p2.age && p1.name == p2.name) {
        return true;
    }
    return false;
}

void test() {
    int i = 0;
    int j = 1;
    bool b = myCompare(i, j);
    if (b) {
        cout << "相等" << endl;
    } else {
        cout << "不相等" << endl;
    }
}

void test2() {
    Person p1(1, "Tom");
    Person p2(1, "Tom");
    bool b = myCompare(p1, p2);
    if (b) {
        cout << "相等" << endl;
    } else {
        cout << "不相等" << endl;
    }
}

int main() {
//    test();
    test2();
    return 0;
}