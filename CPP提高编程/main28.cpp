#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *vector数据存取
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
//    尾插
    for (int i = 0; i < 2; i++) {
        v1.push_back(i);
    }
    cout << "" << endl;
    //利用[]访问数组中元素
    for (int j = 0; j < v1.size(); j++) {
        cout << v1[j] << endl;
    }
    cout << "" << endl;
    //利用at访问数组中元素
    for (int j = 0; j < v1.size(); j++) {
        cout << v1.at(j) << endl;
    }
    cout << endl;
//    获取第一个元素
    cout << v1.front() << endl;
    cout << endl;
    //获取最后一个元素
    cout << v1.back() << endl;
}

int main() {
    test();
    return 0;
}