#include <iostream>
#include <set>

using namespace std;

/*
 *set容器排序
 */
class MyCompare {
public:
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }

};

void test() {
    set<int> s1;
    s1.insert(1);
    s1.insert(22);
    s1.insert(4);
    s1.insert(5);
    s1.insert(12);
    //默认是从小到大
    for (set<int>::iterator i = s1.begin(); i != s1.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

}

//指定排序规则从大到小
void test2() {
    set<int, MyCompare> s1;
    s1.insert(1);
    s1.insert(22);
    s1.insert(4);
    s1.insert(5);
    s1.insert(12);
    //默认是从小到大
    for (set<int>::iterator i = s1.begin(); i != s1.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
}

int main() {
    test();
    test2();
    return 0;
}