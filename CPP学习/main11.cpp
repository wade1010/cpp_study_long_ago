#include "iostream"

using namespace std;
//1 new的 基本语法

int *test() {
    //在堆区创建整型数据
    //new返回的是该数据类型的指针
    int *p = new int(10);
    return p;
}

//2 在堆区利用new开辟数组

int *test2() {
    int *arr = new int[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }
    for (int j = 0; j < 10; ++j) {
        cout << arr[j] << endl;
    }
    //释放堆区数组,需要加[]
    delete[] arr;
}


int main() {
    int *p = test();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    //堆区的数据由程序员自己管理开辟，程序员管理释放
    //如果想释放堆区的数据，利用关键字delete
    delete p;
    //cout << *p << endl;//内存已经释放，再次访问就是非法操作，会报错

    return 0;
}