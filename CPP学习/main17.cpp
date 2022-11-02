#include "iostream"

using namespace std;

const double PI = 3.14;

/*
 * 设计一个圆类，求圆的周长
 *
 */

class Circle {
    //访问权限
    //公共权限
public:
    //属性
    //半径
    int radius;

    //行为
    //获取圆的周长
    double calculateZC() {
        return 2 * PI * radius;
    }
};

int main() {
    //通过类创建具体的对象
//    Circle c = {10}; 或者如下
    Circle c;
    c.radius = 10;
    cout << "圆的周长:" << c.calculateZC() << endl;
    return 0;
}