#include "iostream"

using namespace std;

int main() {
    //指针和数组
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "第一个元素" << arr[0] << endl;
    int *p = arr;
    cout << arr << endl;//arr就是数组的首地址
    cout << "利用指针访问第一个元素：" << *p << endl;
    cout << "p移动前的地址：" << p << " " << (long) p << endl;
    p++;//p是一个整型的指针，64位系统下占8个字节，p++之后，就会往后移8个字节
    cout << "p移动后的地址：" << p << " " << (long) p << endl;
    cout << "利用指针访问第二个元素：" << *p << endl;

    cout << "利用指针遍历数组" << endl;
    int *p2 = arr;
    for (int i = 0; i < 10; i++) {
//        cout << arr[i] << endl;//以前的访问方式
        cout << *p2 << endl;
        p2++;
    }
    return 0;
}