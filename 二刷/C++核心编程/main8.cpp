#include "iostream"

using namespace std;

void func(int a, int) {
    cout << a << endl;
}

void func2(int a, int= 10) {
    cout << a << endl;
}

int main() {
    func(10, 11);
    func2(1);
    return 0;
}