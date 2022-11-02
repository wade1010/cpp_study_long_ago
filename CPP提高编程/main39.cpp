using namespace std;

#include <iostream>
#include <set>

/*
 *
 */

void test() {
    set<int> s;
    pair<set<int>::iterator, bool> ret = s.insert(10);
    if (ret.second) {
        cout << "第一次插入成功" << endl;
    }

    pair<set<int>::iterator, bool> ret2 = s.insert(10);
    if (ret2.second) {
        cout << "第二次插入成功" << endl;
    } else {
        cout << "第二次插入失败" << endl;
    }

    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);

    for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;


}

int main() {
    test();
    return 0;
}