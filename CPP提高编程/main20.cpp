#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *string比较
 *
 */
void test() {
    string str1 = "hello world";
    string str2 = "hello world";
    if (str1.compare(str2) == 0) {
        cout << "str1等于str2" << endl;
    } else if (str1.compare(str2) > 0) {
        cout << "str1大于str2" << endl;
    } else {
        cout << "str1小于str2" << endl;
    }
}


int main() {
    test();
    return 0;
}