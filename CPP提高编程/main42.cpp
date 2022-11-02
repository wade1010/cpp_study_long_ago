#include <iostream>
#include <set>

using namespace std;

/*
 *set容器排序 自定义类型
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

class MyCompare {
public:
    bool operator()(const Person &p1, const Person &p2) {
        return p1.age > p2.age;
    }
};

void test() {
    //自定义数据类型 都会指定排序规则
    set<Person,MyCompare> s;
    Person p1("a", 1);
    Person p2("b", 2);
    Person p3("c", 3);
    Person p4("d", 4);
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);
    for (set<Person>::iterator it = s.begin(); it != s.end(); it++) {
        cout << it->name << " " << it->age << endl;
    }

}

int main() {
    test();
    return 0;
}