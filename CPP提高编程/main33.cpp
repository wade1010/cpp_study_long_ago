#include "string"
#include "iostream"
#include "deque"
#include "algorithm"

using namespace std;

/*
 *deque容器排序
 *
 */
void printDeque(const deque<int> &d) {
    for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

void test() {
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    printDeque(d);

    //排序  vector 容器也支持排序
    sort(d.begin(), d.end());
    printDeque(d);


}

int main() {
    test();
    return 0;
}