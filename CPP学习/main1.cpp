# include "iostream"

# define day 7
using namespace std;

int main() {
    cout << "hello world" << endl;
    int a = 1;
    cout << "a=" << a << endl;

    const int constInt = 1;
    cout << constInt << endl;


    cout << day << endl;


    short a1 = 10;
    int a2 = 10;
    long a3 = 10;
    long long a4 = 10;

    cout << endl;
    cout << sizeof(a1) << endl;
    cout << sizeof(a2) << endl;
    cout << sizeof(a3) << endl;
    cout << sizeof(a4) << endl;

    float f1 = 3.1415925;

    cout << f1 << endl;//3.14159  默认情况下，输出一个小数，会显示出6位的有效数字 314159

    double d1 = 3.1415925;

    cout << d1 << endl; //和上面一样默认都是显示3.14159


    //科学计数法
    float f2 = 3e2;
    cout << "f2=" << f2 << endl;

    float f3 = 3e-2;//3*(1/(10e2))      a^-x=1/a^x
    cout << "f3=" << f3 << endl;


    char ch1 = 'a';
    cout << int(ch1) << endl;//打印对应的ascII码  a=97


    cout << "f\tfsadf" << endl;
    cout << "ff\tfsadf" << endl;
    cout << "ffadsfafffff\tfsadf" << endl;


    //C风格字符串型  沿用C风格
    char str1[] = "hello world";
    cout << str1 << endl;

    //C++字符串型
    string str2 = "hello world";
    cout << str2 << endl;

    return 0;
}
