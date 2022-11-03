#include "iostream"

using namespace std;

int main() {
    int a = 10;
    cout << sizeof(&a) << endl;
    cout << sizeof(int *) << endl;
    cout << sizeof(double *) << endl;
    cout << sizeof(float *) << endl;
    return 0;
}