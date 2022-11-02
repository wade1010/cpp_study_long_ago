#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *string字符存取
 *
 */
void test() {
    string str = "hello";
    cout << str << endl;

    //1 通过中括号访问
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << endl;
    }

    cout << "---------------" << endl;

    //2 通过at访问单个字符
    for (int j = 0; j < str.size(); j++) {
        cout << str.at(j) << endl;
    }

    //修改
    str[0] = 'x';
    cout << str << endl;
    str.at(1) = 'x';
    cout << str << endl;
}


int main() {
    test();
    return 0;
}