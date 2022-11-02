#include "iostream"

using namespace std;

//猜数字
int main() {
    //系统生成随机数
    srand(time(NULL));//需要随机终止，要不然每次产生的数字都是一样的
    int num = rand() % 100 + 1;//生成0-99之间的随机数
//    cout << num << endl;
    //猜测
    while (true) {
        int guess = 0;
        cout << "请输入猜测的数字:" << endl;
        cin >> guess;
        if (guess > num) {
            cout << "您猜测的数字为:" << guess << ",大了" << endl;
        } else if (guess < num) {
            cout << "您猜测的数字为:" << guess << ",小了" << endl;
        } else {
            cout << "恭喜您猜对了!" << endl;
            break;
        }
    }
    //判断大小
    //对，退出
    //错 提示大小
    return 0;
}