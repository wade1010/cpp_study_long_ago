using namespace std;

#include <iostream>
#include "stack"

/*
 * stack容器
 */
void test() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.size() << endl;
    cout << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
    cout << s.size() << endl;
}

int main() {
    test();
    return 0;
}