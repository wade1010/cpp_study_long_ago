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

    list<int> l2(l.begin(),l.end());
    printList(l2);

    list<int> l3(l2);
    printList(l3);

    list<int> l4(10,100);
    printList(l4);
}

int main() {
    test();
    return 0;
}