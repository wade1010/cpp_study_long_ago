#include "iostream"
#include "string"
#include "fstream"

using namespace std;

/*
 *实现通用 对数组进行排序的函数
 * 规则 从大到小
 * 算法 选择排序
 * 测试 char 数组、int 数组
 */
//交换函数模板
template<typename T>
void mySwap(T &a, T &b) {
    int temp = a;
    a = b;
    b = temp;
}

//排序算法
template<typename T>
void mySort(T arr[], int len) {
    for (int i = 0; i < len; i++) {
        int max = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[max] < arr[j]) {
                max = j;

            }
        }
        if (max != i) {
            mySwap(arr[max], arr[i]);
        }
    }
}

//提供打印数组的模板
template<typename T>
void printArray(T arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test() {
    //测试char数组
    char charArr[] = "badcfe";
    int num = sizeof(charArr) / sizeof(char);
    mySort(charArr, num);
    printArray(charArr, num);
}

void test2() {
    int arr[] = {32, 321, 3, 4324, 2, 543, 5, 46, 1};
    int num = sizeof(arr) / sizeof(int);
    mySort(arr,num);
    printArray(arr, num);
}

int main() {
    test();
    test2();
    return 0;
}