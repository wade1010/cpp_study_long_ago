#include "iostream"
#include "math.h"
using namespace std;

int main() {
    //水仙花数
    int num = 100;
    int ret = 0;
    do {
        ret = pow(num / 100, 3) + pow(num / 10 % 10, 3) + pow(num % 10, 3);
        if (ret == num) {
            cout << "水仙花数：" << num << endl;
        }
        num++;
    } while (num < 1000);
    return 0;
}