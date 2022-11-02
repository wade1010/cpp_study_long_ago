#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *string查找和替换
 *
 */
//查找
void test() {
    string str1 = "abcdefg";
    int pos = str1.find("de");
    cout << pos << endl;
    pos = str1.rfind("de");
    cout << pos << endl;

    string str2 = "abcdefgde";
    pos = str2.rfind("de");
    cout << pos << endl;
}


//替换
void test2() {
    string str1 = "abcdefg";
    str1.replace(1, 3, "1111");
    cout << str1 << endl;
}

int main() {
    test();
    test2();
    return 0;
}