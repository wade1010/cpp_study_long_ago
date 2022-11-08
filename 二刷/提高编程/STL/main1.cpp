#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

void myPrint(int val)
{
    cout << val << endl;
}
void test()
{
    //创建vector容器对象 并且通过模板参数指定容器中存放的数据类型
    vector<int> v;
    //向容器中放数据
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    //每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
    // v.begin()返回迭代器，这个迭代器指向容器中第一个数据
    // v.end()返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
    // vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
    vector<int>::iterator iterBegin = v.begin();
    vector<int>::iterator iterEnd = v.end();
    //第一种遍历
    while (iterBegin != iterEnd)
    {
        cout << *iterBegin << endl;
        iterBegin++;
    }
    cout << endl;
    //第二种遍历
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;
    //第三种遍历
    //使用STL提供的遍历算法 头文件 algorithm
    for_each(v.begin(), v.end(), myPrint);
}
int main()
{
    test();
    return 0;
}