#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *vector容器的容量和大小操作
 *
 */
void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test() {
    vector<int> v1;//默认构造
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    printVector(v1);
//判断是否为空
    if (v1.empty()) {
        cout << "为空" << endl;
    } else {
        cout << "不为空" << endl;
        cout << "容量：" << v1.capacity() << endl;
        cout << "大小：" << v1.size() << endl;
    }
    //重新指定大小
    v1.resize(15);
    printVector(v1);

    v1.resize(20,100);
    printVector(v1);

    v1.resize(5);//比原来短，超出部分会删除
    printVector(v1);
}

int main() {
    test();
    return 0;
}