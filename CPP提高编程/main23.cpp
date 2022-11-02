#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *string子串
 *
 */
void test() {
    string str = "hello world";
    str = str.substr(0, 3);
    cout << str << endl;
}

void test2() {
    string str = "zhangsan@sina.com";
    //从邮件中获取 用户名信息
    int pos = str.find("@");
    string username = str.substr(0, pos);
    cout << username << endl;
}

int main() {
    test();
    test2();
    return 0;
}