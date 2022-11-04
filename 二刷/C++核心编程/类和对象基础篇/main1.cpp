#include "iostream"

using namespace std;

int *func() {
    //在堆区创建整型数据
    //new返回是 该数据类型的指针
//    return new int(10);
    int *p = new int(10);
    return p;
}

void test1() {
    int *p = func();
    cout << *p << endl;
    //堆区的数据 由程序员管理开辟 程序员管理释放
    //如果想释放堆区的数据，利用关键字delete
    delete p;
//    cout << *p << endl;//内存已经释放，再次访问就是非法操作，报错
}

void test2() {
    //创建10整型数据的数组，在堆区
    int *arr = new int[10];//10代表数组有10个元素
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 100;
    }
    for (int j = 0; j < 10; j++) {
        cout << arr[j] << endl;
    }
    //释放堆区数组
    //释放数组的时候，要加[]才可以
//    delete arr;//不报错，但是有提示 'delete' applied to a pointer that was allocated with 'new[]'; did you mean 'delete[]'? allocated with 'new[]' here
    delete[] arr;
}

int main() {
    //new的基本语法
    test1();
    cout << endl;
    //在堆区利用new开辟数组
    test2();
    return 0;
}