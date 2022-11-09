#include "iostream"
#include "vector"

using namespace std;

//vector容器互换
void printVector(vector<int> v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//1 基本使用
void test1() {
    vector<int> v1;

    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    cout << "交换前：" << endl;
    printVector(v1);

    vector<int> v2;
    for (int j = 10; j > 0; j--) {
        v2.push_back(j);
    }
    printVector(v2);

    cout << "交换后：" << endl;
    v1.swap(v2);

    printVector(v1);
    printVector(v2);
}
//2 实际用途：巧用swap可以收缩内存空间

void test2() {
    vector<int> v;
    for (int i = 0; i < 100000; i++) {
        v.push_back(i);
    }
    cout << "v的容量为：" << v.capacity() << endl;
    cout << "v的大小为：" << v.size() << endl;
    v.resize(3);
    cout << "resize后 v的容量为：" << v.capacity() << endl;
    cout << "resize后 v的大小为：" << v.size() << endl;

    //巧用swap收缩内存空间
    vector<int>(v).swap(v);
    cout << "swap后 v的容量为：" << v.capacity() << endl;
    cout << "swap后 v的大小为：" << v.size() << endl;
}

int main() {
    test1();
    test2();
    return 0;
}
//不用reserve时，动态扩展次数：18
//使用reserve时，动态扩展次数：1
