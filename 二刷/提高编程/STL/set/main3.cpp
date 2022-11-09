#include "iostream"
#include "set"
using namespace std;
// set 和 multiset 区别
void test()
{
    set<int> s;
    pair<set<int>::iterator, bool> ret = s.insert(10);
    if (ret.second)
    {
        cout << "fisrt insert ok" << endl;
    }
    else
    {
        cout << "fisrt insert not ok" << endl;
    }
    ret = s.insert(10);
    if (ret.second)
    {
        cout << "second insert ok" << endl;
    }
    else
    {
        cout << "second insert not ok" << endl;
    }

    // multiset
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    test();
    return 0;
}