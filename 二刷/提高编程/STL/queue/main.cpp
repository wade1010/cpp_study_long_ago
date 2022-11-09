#include "iostream"
#include "queue"

using namespace std;

//queue容器
void test() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while (!q.empty()) {
        cout << "front=" << q.front() << " back=" << q.back() << " q.size() =" << q.size() << endl;
        q.pop();
    }
}

int main() {
    test();
    return 0;
}