#include "iostream"

using namespace std;

int main() {
    int arr[2][3] = {
            {1, 2, 3},
            {4, 5, 6},
    };
    //1 查看二维数组所占内存空间
    cout << "二维数组占用内存空间" << sizeof(arr) << endl;
    cout << "二维数组第一行占用内存空间" << sizeof(arr[0]) << endl;
    cout << "二维数组第一元素占用内存空间" << sizeof(arr[0][0]) << endl;
    cout << "二维数组行数为" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组列数为" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    //2 查看二维数组的首地址
    cout << "二维数组首地址为：" << arr << endl;
    cout << "二维数组第一行地址为：" << arr[0] << endl;
    cout << "二维数组第一个元素首地址为：" << &arr[0][0] << endl;

    cout << "二维数组第一行地址long为：" << (long) arr[0] << endl;
    cout << "二维数组第二行地址long为：" << (long) arr[1] << endl;//相差12，也就是一行的大小


    return 0;
}