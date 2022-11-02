#include "string"
#include "iostream"
#include "deque"

using namespace std;

/*
 *deque容器赋值操作
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

//    等号赋值
    deque<int> d2;
    d2 = d;
    printDeque(d2);
    //assign 赋值
    deque<int> d3;
    d3.assign(d.begin(), d.end());
    printDeque(d3);

    deque<int> d4;
    d4.assign(10, 100);
    printDeque(d4);

}

int main() {
    test();
    return 0;
}