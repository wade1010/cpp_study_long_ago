#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void myPrint(int v) {
    cout << v << endl;
}

/*
 * vector 容器存放内置数据类型
 */

void test() {
    //创建一个vector容器数组
    vector<int> v;
    //向容器中插入数据
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(14);
    v.push_back(5);


    //第一种遍历方式
//    //通过迭代器访问容器中的数据
//    vector<int>::iterator itBegin = v.begin();//起始迭代器 指向容器中第一个元素
//    vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器中最后一个元素的下一个位置
//

//    while (itBegin != itEnd) {
//        cout << *itBegin << endl;
//        itBegin++;
//    }


//第二种遍历方式
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//        cout << *it << endl;
//}

//第三种遍历方式
    for_each(v.begin(), v.end(), myPrint);
}

int main() {
    test();
    return 0;
}

