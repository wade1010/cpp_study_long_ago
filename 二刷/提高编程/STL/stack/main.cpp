#include "iostream"
#include "stack"

using namespace std;

//栈
//特点，先进后出
void test() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "栈的大小：" << s.size() << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "栈的大小：" << s.size() << endl;
}

int main() {
    test();
    return 0;
}