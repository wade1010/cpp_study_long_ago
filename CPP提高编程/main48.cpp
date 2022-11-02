#include <iostream>
#include <vector>
#include "algorithm"
#include "functional"

using namespace std;

/*
 * 常用遍历算法
 */
void print1(int v) {
    cout << v << " ";
}

class Print2 {
public:
    void operator()(int v) {
        cout << v << " ";
    }
};

void test() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), print1);
    cout << endl;

    for_each(v.begin(), v.end(), Print2());
    cout << endl;

}

class MyTransform {
public:
    int operator()(int v) {
        return v;
    }

};

class MyTransform2 {
public:
    int operator()(int v) {
        return v * 2;
    }

};

//transform
void test2() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    vector<int> v2;
    v2.resize(v.size());//目标容器必须要提前开辟空间
    transform(v.begin(), v.end(), v2.begin(), MyTransform());
    for_each(v2.begin(), v2.end(), Print2());
    cout << endl;
    vector<int> v3;
    v3.resize(v.size());//目标容器必须要提前开辟空间
    transform(v.begin(), v.end(), v3.begin(), MyTransform2());
    for_each(v3.begin(), v3.end(), Print2());
}

int main() {
    test();
    cout << endl;
    test2();
    return 0;
}