#include "iostream"
#include "list"

using namespace std;

void printList(const list<int> &l) {
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//list 大小操作
void test() {
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    printList(l1);
    if (l1.empty()) {
        cout << "l1为空" << endl;
    } else {
        cout << "l1不为空" << endl;
        cout << "l1个数：" << l1.size() << endl;
    }
    //重新指定大小
    l1.resize(2);
    printList(l1);
    l1.resize(4, 100);
    printList(l1);
}

int main() {
    test();
    return 0;
}
