#include "iostream"
#include "list"

using namespace std;

void printList(const list<int> &l) {
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//list赋值和交换
void test() {
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    printList(l1);

    list<int> l2 = l1;
    printList(l2);

    list<int> l3;
    l3.assign(l2.begin(), l2.end());
    printList(l3);

    list<int> l4;
    l4.assign(10, 1);
    printList(l4);


}

//交换
void test2() {
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    list<int> l2;
    l2.assign(10, 1);
    cout << "交换前:" << endl;
    printList(l1);
    printList(l2);
    l1.swap(l2);
    cout << "交换后:" << endl;
    printList(l1);
    printList(l2);
};

int main() {
    test();
    cout << endl;
    test2();
    return 0;
}