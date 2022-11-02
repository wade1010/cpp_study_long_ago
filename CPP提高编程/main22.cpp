#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *string插入和删除
 *
 */
void test() {
    string str = "hello world";
    str.insert(1, "xo");
    cout << str << endl;

    //删除
    str.erase(0, 2);
    cout << str << endl;
}


int main() {
    test();
    return 0;
}