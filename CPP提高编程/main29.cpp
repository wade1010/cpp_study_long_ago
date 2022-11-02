#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *vector互换
 *
 */
void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//1 基本使用
void test() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }

    printVector(v1);

    vector<int> v2;
    for (int i = 10; i > 0; i--) {
        v2.push_back(i);
    }
    printVector(v2);

    cout << "交换后" << endl;
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

//2 实际用途
void test2() {
    vector<int> v;
    for (int i = 0; i < 10000; i++) {
        v.push_back(i);
    }
    cout << "v的容量：" << v.capacity() << endl;
    cout << "v的大小：" << v.size() << endl;
    v.resize(3);
    cout << "v的容量：" << v.capacity() << endl;
    cout << "v的大小：" << v.size() << endl;
    //巧用swap收缩内存
    vector<int>(v).swap(v);
    cout << "v的容量：" << v.capacity() << endl;
    cout << "v的大小：" << v.size() << endl;
}

int main() {
    test();
    cout << endl;
    cout << endl;
    test2();
    return 0;
}