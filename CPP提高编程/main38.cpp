using namespace std;

#include <iostream>
#include <list>

/*
 *list容器
 */
void printList(const list<int> &l) {
    for (list<int>::const_iterator i = l.begin(); i != l.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

void test() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    printList(l);

    list<int> l2;
    l2 = l;
    printList(l2);


    list<int> l3;
    l3.assign(l2.begin(), l2.end());
    printList(l3);

    list<int> l4;
    l4.assign(10, 100);
    printList(l4);

    //交换

    list<int> lswap;
    lswap.assign(10, 1);
    cout << "交换前" << endl;
    printList(l4);
    printList(lswap);

    l4.swap(lswap);
    cout << "交换后" << endl;
    printList(l4);
    printList(lswap);
}

int main() {
    test();
    return 0;
}