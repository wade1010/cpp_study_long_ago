#include <iostream>
#include <vector>
#include "algorithm"
#include "functional"

using namespace std;

/*
 * 内建函数对象 算数仿函数
 * negate  一元仿函数  取反仿函数
 *
 * plus 二元仿函数  加法
 */
void test() {
    negate<int> n;
    cout << n(10) << endl;
    cout << n(1) << endl;

    cout << endl;
    plus<int> p;
    cout << p(10, 20) << endl;
}

int main() {
    test();
    return 0;
}