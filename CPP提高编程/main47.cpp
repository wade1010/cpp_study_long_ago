#include <iostream>
#include <vector>
#include "algorithm"
#include "functional"

using namespace std;

/*
 * 内建函数对象  关系仿函数
 */

void test() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    //降序
    sort(v.begin(),v.end(),greater<int>());
//    sort(v.begin(),v.end(),less<int>());
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

int main() {
    test();
    return 0;
}