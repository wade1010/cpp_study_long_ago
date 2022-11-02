#include <iostream>
#include <set>

using namespace std;

/*
 *pair对组的使用
 */

void test() {
    //1
    pair<string, int> p("a", 1);
    cout << p.first << "  " << p.second << endl;
    //2
    pair<string, int> p2 = make_pair("b", 2);
    cout << p2.first << "  " << p2.second << endl;
}

int main() {
    test();
    return 0;
}