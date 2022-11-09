#include "iostream"
#include "list"

using namespace std;

void printList(const list<int> &l) {
    for (auto i:l) {
        cout << i << " ";
    }
    cout << endl;
}

//list容器构造函数
void test() {
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    printList(l1);

    //区间方式构造
    list<int> l2(l1.begin(), l1.end());
    printList(l2);
    //拷贝构造
    list<int> l3(l2);
    printList(l3);
    //n个element
    list<int> l4(10, 1);
    printList(l4);
}

int main() {
    test();
    return 0;
}