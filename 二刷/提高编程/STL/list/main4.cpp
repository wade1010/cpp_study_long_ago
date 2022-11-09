#include "iostream"
#include "list"

using namespace std;

void printList(list<int> &l) {
    for (auto i:l) {
        cout << i << " ";
    }
    cout << endl;
}

//list 插入和删除
void test() {
    list<int> l1;
    //尾插
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    //头插
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);

    printList(l1);

    //尾删
    l1.pop_back();
    //头删
    l1.pop_front();
    printList(l1);
//    200 100 1 2 3
    l1.insert(l1.begin(), 1000);
//    1000 200 100 1 2 3
    printList(l1);
    list<int>::iterator it = l1.begin();
    l1.insert(++it, 2000);
//    1000 2000 200 100 1 2 3
    printList(l1);

    it = l1.begin();

    //删除
    l1.erase(it);
    //   2000 200 100 1 2 3
    printList(l1);

    l1.erase(++it);
    //   200 100 1 2 3
    printList(l1);

    it = l1.begin();
    l1.erase(++it);
    //   200 1 2 3
    printList(l1);

    //移除
    l1.push_back(200);
    l1.push_back(1);
//    200 1 2 3 200 1
    printList(l1);


    l1.remove(1);
//    200 2 3 200
    printList(l1);

    //clear
    l1.clear();
    printList(l1);

}

int main() {
    test();
    return 0;
}