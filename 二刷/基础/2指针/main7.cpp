#include "iostream"

using namespace std;

void bubbleSort(int *arr, int len) {
    int temp = 0;
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    //封装一个函数，利用冒泡排序，实现对整型数组的升序排序
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "排序前：" << endl;
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr, len);
    cout << "排序后：" << endl;
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}