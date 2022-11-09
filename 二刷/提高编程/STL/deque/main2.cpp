#include "iostream"
#include "deque"
#include "vector"
#include "algorithm"

using namespace std;

void printDeque(deque<int> &d) {
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//deque容器排序
void test() {
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);

    cout << "排序前：" << endl;
    printDeque(d);

    //默认从小到大 升序
    //对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
    //vector容器也可以利用 sort进行排序
    sort(d.begin(), d.end());

    cout << "排序后：" << endl;
    printDeque(d);
}

void test2() {
    vector<int> v;
    v.push_back(134);
    v.push_back(54);
    v.push_back(1432);
    v.push_back(43);
    v.push_back(1);
    sort(v.begin(), v.end());
    cout << "vector 排序后：" << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    test();
    test2();
    return 0;
}