#include "iostream"
#include "set"
using namespace std;
// set
void printSet(const set<int> s)
{
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test()
{
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(43);
    s.insert(33);
    s.insert(2);
    printSet(s); //排好序的 默认是从小打到

    set<int> s2(s);
    printSet(s2);

    set<int> s3;
    s3 = s2;
    printSet(s3);
}
//大小
void test2()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(3);
    s1.insert(2);
    s1.insert(4);
    if (s1.empty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty,size is " << s1.size() << endl;
    }
}
//交换
void test3()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(3);
    s1.insert(2);
    s1.insert(4);
    set<int> s2;
    s2.insert(100);
    s2.insert(300);
    s2.insert(200);
    s2.insert(400);
    cout << "before swap" << endl;
    printSet(s1);
    printSet(s2);
    cout << endl;
    cout << "after swap" << endl;
    s1.swap(s2);
    printSet(s1);
    printSet(s2);
}
int main()
{
    test();
    test2();
    test3();
    return 0;
}