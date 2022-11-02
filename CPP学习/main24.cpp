#include "iostream"

using namespace std;

class Person {
public:
    //传统初始化操作
//    Person(int a, int b, int c) {
//        ma = a;
//        mb = b;
//        mc = c;
//    }

    //初始化列表初始化属性
    Person(int a, int b, int c) : ma(a), mb(b), mc(c) {
        
    }

    int ma;
    int mb;
    int mc;
};

void test() {
    Person a(1, 2, 3);
    cout << a.ma << "  " << a.mb << "  " << a.mc << endl;
}

int main() {
    test();
    return 0;
}