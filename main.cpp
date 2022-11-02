#include <iostream>
#include <vector>
#include "algorithm"
#include "functional"

using namespace std;

/*
 * 常用遍历算法
 */

class Print {
public:
    void operator()(int v) {
        cout << v << " ";
    }
};

void test() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    vector<int> v2;
    for (int i = 10; i > 0; i--) {
        v2.push_back(i);
    }
    vector<int> v3;
    v3.resize(v.size() + v2.size());
    merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), v3.end(), Print());
}

int main() {
    test();
    return 0;
}