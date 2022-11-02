#include "string"
#include "iostream"
#include "deque"

using namespace std;

/*
 *deque 构造函数
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
    for (int i = 0; i < 10; i++) {
        d.push_back(i);
    }
    printDeque(d);

    deque<int> d2(d);
    printDeque(d2);

    deque<int> d3(d.begin(), d.end());
    printDeque(d3);

    deque<int> d4(10,100);
    printDeque(d4);
}

int main() {
    test();
    return 0;
}