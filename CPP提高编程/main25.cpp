#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *vector的赋值
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
    for (int i = 0; i < 5; i++) {
        v1.push_back(i);
    }
    printVector(v1);
//赋值
    vector<int> v2;
    v2 = v1;
    printVector(v2);

    //assign
    vector<int> v3;
    v3.assign(v1.begin(), v1.end());
    printVector(v3);

    //n个elem 方式赋值
    vector<int> v4;
    v4.assign(10,100);
    printVector(v4);
}

int main() {
    test();
    return 0;
}