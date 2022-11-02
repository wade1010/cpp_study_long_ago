#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/*
 *string的拼接
 *
 */
void test() {
    string str1 = "我";
    str1 += "爱玩游戏";
    cout << str1 << endl;

    str1 += ':';
    cout << str1 << endl;

    string str2 = "LOL DNF";
    str1 += str2;
    cout << str1 << endl;

    string str3 = "I";
    str3.append(" love ");
    cout << str3 << endl;

    str3.append("game abcd", 4);
    cout << str3 << endl;

    str3.append(str2);
    cout << str3 << endl;

    string str4 = "I love ";
    str4.append(str2, 0, 3);
    cout << str4 << endl;

}

int main() {
    test();
    return 0;
}