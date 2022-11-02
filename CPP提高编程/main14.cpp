#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;


/*
 * vector 容器存放自定义数据类型
 */

class Person {
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    string name;
    int age;

};

void myPrint(int v) {
    cout << v << endl;
}

void test() {
    //创建一个vector容器数组
    vector<Person> v;
    //向容器中插入数据
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);


    /*vector<Person>::iterator itBegin = v.begin();//起始迭代器 指向容器中第一个元素
    vector<Person>::iterator itEnd = v.end();//结束迭代器，指向容器中最后一个元素的下一个位置
    while (itBegin != itEnd) {
//        cout << (*itBegin).name << ":" << (*itBegin).age << endl;
        cout << itBegin->name << ":" << itBegin->age << endl;

        itBegin++;
    }*/

}

//存放自定义类型 指针
void test2() {
    vector<Person *> v;
    //向容器中插入数据
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << (*(*it)).name << " " << (*(*it)).age << endl;
        cout << (*it)->name << " " << (*it)->age << endl;
    }
}

int main() {
//    test();
    test2();
    return 0;
}

