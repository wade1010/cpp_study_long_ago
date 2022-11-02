#include "iostream"

using namespace std;

bool isTapTable(int num) {
    return num % 7 == 0 || num % 10 == 7 || num / 10 == 7;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        if (isTapTable(i)) {
            cout << "敲桌子:" << i << endl;
        }
    }

    return 0;
}