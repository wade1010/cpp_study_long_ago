#include "iostream"

using namespace std;

int main() {
//    for 循环 从数字0打印到9
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    //等价于
    cout << "" << endl;
    int j = 0;
    for (;;) {
        if (j >= 10) {
            break;
        }
        cout << j << endl;
        j++;
    }
    return 0;
}