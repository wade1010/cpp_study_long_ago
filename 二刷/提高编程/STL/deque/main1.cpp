#include "iostream"
#include "deque"

using namespace std;

//void printDeque(const deque<int> &d) {//这里加const会报错
void printDeque(deque<int> &d) {
    //下面是iterator是可以修改内部元素的
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//        *it = 100;//const_iterator 容器中数据不可以修改
        cout << *it << " ";
    }
    cout << endl;
}

//deque构造函数
void test1() {
    deque<int> d1;
    for (int i = 0; i < 10; i++) {
        d1.push_back(i);
    }
    printDeque(d1);

    deque<int> d2(d1.begin(), d1.end());
    printDeque(d2);


    deque<int> d3(10, 1);
    printDeque(d3);

    deque<int> d4(d3);
    printDeque(d4);

}

int main() {
    test1();
    return 0;
}