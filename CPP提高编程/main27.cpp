#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *vector插入和删除
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
    v1.push_back(10);
    v1.push_back(20);
    printVector(v1);
//    尾删
    v1.pop_back();
    printVector(v1);
//    插入
    v1.insert(v1.begin(), 100);
    printVector(v1);

    v1.insert(v1.begin(), 2, 1000);
    printVector(v1);

//    删除
    v1.erase(v1.begin());
    printVector(v1);
//清空
//    v1.erase(v1.begin(), v1.end());//相当于清空
//    printVector(v1);
    v1.clear();
    printVector(v1);

}

int main() {
    test();
    return 0;
}