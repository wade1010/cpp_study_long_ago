#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *vector容器
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

    //通过区间方式进行构造
    vector<int> v2(v1.begin(), v1.end());
    printVector(v2);

    //n个element方式构造   10个100
    vector<int> v3(10, 100);
    printVector(v3);


    //拷贝构造
    vector<int> v4(v3);
    printVector(v4);

}

int main() {
    test();
    return 0;
}