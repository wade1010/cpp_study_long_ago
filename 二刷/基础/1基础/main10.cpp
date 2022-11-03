#include "iostream"

using namespace std;

int main() {
    //冒泡排序
    int arr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "排序前:" << endl;
    for (int l = 0; l < len; l++) {
        cout << arr[l] << " ";
    }
    cout << endl;

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "排序后:" << endl;
    for (int l = 0; l < len; l++) {
        cout << arr[l] << " ";
    }
    cout << endl;
    return 0;
}