using namespace std;

#include <iostream>
#include "queue"

/*
 * queue容器
 */
void test() {
    queue<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while (!s.empty()) {
        cout << s.back() << " " << s.front() << endl;
        s.pop();
    }
    cout << "队列大小：" << s.size() << endl;
}

int main() {
    test();
    return 0;
}