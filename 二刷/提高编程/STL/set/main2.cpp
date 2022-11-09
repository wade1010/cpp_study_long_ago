#include "iostream"
using namespace std;
#include "set"
void test()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    //查找
    set<int>::iterator it = s.find(3);
    if (it != s.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    //统计
    int num = s.count(2);
    cout << "num:" << num << endl;
}
int main()
{
    test();
    return 0;
}