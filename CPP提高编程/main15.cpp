#include "string"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;


/*
 * 容器嵌套容器
 */

void test() {
    vector<vector<int>> v;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    //向小容器中添加数据
    for (int i = 0; i < 4; i++) {
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 4);
    }
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    //通过大容器，把所有数据遍历一遍
    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
        for (vector<int>::iterator subIt = (*it).begin(); subIt != (*it).end(); subIt++) {
            cout << *subIt << " ";
        }
        cout << endl;
    }

}

int main() {
    test();
    return 0;
}