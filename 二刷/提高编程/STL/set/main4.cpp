#include "iostream"
using namespace std;
//创建对组
void test()
{
    pair<string, int> p("aa", 1);
    cout << p.first << "  " << p.second << endl;

    pair<int, char> p2 = make_pair(1, 'c');
    cout << p2.first << "  " << p2.second << endl;
}
int main()
{
    test();
    return 0;
}