#include "iostream"
using namespace std;
#include "list"
#include "algorithm"
void printList(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
bool myCompare(int a, int b)
{
    return a > b;
}
void test()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    printList(l);
    //反转
    l.reverse();
    printList(l);

    //排序
    // sort(l.begin(), l.end()); list不支持随机访问,不能用sort,得用内置的排序算法
    l.sort(); // 1 2 3 4  默认从小到大排序
    printList(l);
    l.sort(myCompare); //指定规则，从大到小
    printList(l);
}
int main()
{
    test();
    return 0;
}