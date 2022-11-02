#include "iostream"

using namespace std;

int main() {
    int arr[5] = {300, 350, 200, 400, 250};
    int max = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "最大体重为:" << max << endl;
    return 0;
}