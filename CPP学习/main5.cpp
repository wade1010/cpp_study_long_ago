# include "iostream"

using namespace std;

template<class T>

int length(T &arr) {
    //cout << sizeof(arr[0]) << endl;
    //cout << sizeof(arr) << endl;
    return sizeof(arr) / sizeof(arr[0]);
}

int main() {
    //定义数组的时候必须有初始长度
    //    int arr[4];
    //    arr[0] = 1;
    //    arr[1] = 2;
    //    arr[2] = 3;
    //    arr[3] = 4;

    int arr2[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < length(arr2); ++i) {
        cout << arr2[i] << endl;
    }

    return 0;
}
