#include "iostream"

using namespace std;

int main() {
    //数组逆置
    int arr[5] = {1, 3, 2, 5, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int k = 0; k < len; k++) {
        cout << arr[k] << endl;
    }
    for (int i = 0; i < len; i++) {
        for (int j = len - i - 1; j > 0;) {
            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            break;
        }
    }
    cout << "" << endl;
    for (int k = 0; k < len; k++) {
        cout << arr[k] << endl;
    }
    return 0;
}