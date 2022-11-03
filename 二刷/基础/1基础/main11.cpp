#include "iostream"

using namespace std;

int main() {
    //类型 数组名[行数][列数];
    //类型 数组名[行数][列数]={{1,2},{,3,4}};
    int arr2[2][3] = {
            {1, 2, 3},
            {4, 5, 6},
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //类型 数组名[行数][列数]={1,2,3,4};  自动帮你分组
    int arr3[2][3] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //类型 数组名[][列数]={1,2,3,4};
    /*
    为什么不能省略列数？
    因为在int arr[][3]={{1,2,3},{1,2,3},{1,2,3}};定义并赋值的过程中，如果省略了列数，就不能确定一行有多少个元素，也不能确定数组有多少行。

    哪些可以省略？
    在int arr[M][N] 中，其中M可以省略，省略后必须给出初始化表达式，编译器从初始化结果中推断数组有多少行
     */
    int arr4[][3] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}