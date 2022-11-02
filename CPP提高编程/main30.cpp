#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *vector预留空间
 *
 */
void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test() {
    vector<int> v;
    int num = 0;
    int *p = NULL;
    for (int i = 0; i < 100000; i++) {
        v.push_back(i);
        if (p != &v[0]) {
            p = &v[0];
            num++;
        }
    }
    cout << "不reserve 分配内存次数：" << num << endl;

}

void test2() {
    vector<int> v;
    v.reserve(100000);
    int num = 0;
    int *p = NULL;
    for (int i = 0; i < 100000; i++) {
        v.push_back(i);
        if (p != &v[0]) {
            p = &v[0];
            num++;
        }
    }
    cout << "reserve后 分配内存次数：" << num << endl;

}

int main() {
    test();
    test2();
    return 0;
}