#include "iostream"
#include "string"

using namespace std;

//继承方式

class Base {
public:
    Base() {
        cout << "Base构造函数" << endl;
    }

    ~Base() {
        cout << "Base析构函数" << endl;
    };
};

//公共继承
class Son : public Base {
public:
    Son() {
        cout << "Son构造函数" << endl;
    }

    ~Son() {
        cout << "Son析构函数" << endl;
    };
};

void test();

int main() {
    test();
    return 0;
}

void test() {
    Son s;
}
