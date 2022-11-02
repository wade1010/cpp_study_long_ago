#include "iostream"

using namespace std;

int main() {
    int score[10];

    score[0] = 1;

    //数据类型 数组名[长度] = {值1,值2,.....}
    //如果在初始化数据的时候，没有完全填写完，会用0来填补剩余数据
    int score2[10] = {1, 2, 3, 4};
    cout << score2[0] << *score2 << endl;


    int score3[] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        cout << score3[i] << endl;
    }

    return 0;
}