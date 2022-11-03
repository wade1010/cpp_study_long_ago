#include "iostream"

using namespace std;

int main() {
    //野指针  下面代码，编译可以通过，但是运行报错
    int *p = (int *) 0x1100;
    cout << *p << endl;
    return 0;
}