#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *string的构造函数
 *
 * string();  创建一个空的字符串，如 string str;
 * string(const char * s);   使用字符串s初始化
 * string(const string &str);  使用一个string对象初始化另一个string对象
 * string(int n,char c);     使用n的字符c初始化
 */
void test() {
    string str1;//默认构造
    const char *str = "hello world";
    string s2(str);
    cout << "s2=" << s2 << endl;
    string s3(s2);
    cout << "s3=" << s3 << endl;
    string s4(10, 'c');
    cout << "s4=" << s4 << endl;
}

int main() {
    test();
    return 0;
}