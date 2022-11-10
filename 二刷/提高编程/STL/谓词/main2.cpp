#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void printVector(const vector<int> &v) {
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

class MyCompare {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

bool compareFunc(int a, int b) {
    return a > b;
}

//二元谓词
void test() {
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    sort(v.begin(), v.end());
    printVector(v);
    //使用函数对象 改变算法策略，变为降序
    sort(v.begin(), v.end(), MyCompare());
    printVector(v);
    MyCompare mp;
    sort(v.begin(), v.end(), mp);
    printVector(v);
    sort(v.begin(), v.end(), compareFunc);
    printVector(v);
}

int main() {
    test();
    return 0;
}