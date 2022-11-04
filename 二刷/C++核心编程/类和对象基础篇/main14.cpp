#include "iostream"

using namespace std;

//类作友元
class Building;//告诉编译器有一个Building类，暂时没定义，不要给我报错

class GoodGay {
public:
    GoodGay();

    void visit();//参观函数 访问Building中的属性 ，这里就声明下，准备用类外实现

    Building *building;
};

class Building {
    friend class GoodGay;

public:
    Building();

    string m_SittingRoom;
private:
    string m_BedRoom;
};

//类外写成员函数
GoodGay::GoodGay() {
    building = new Building;//在堆区创建一个对象
}

void GoodGay::visit() {
    cout << "好基友这个类正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友这个类正在访问：" << building->m_BedRoom << endl;

}

Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

void test1() {
    GoodGay gg;
    gg.visit();
}

int main() {
    test1();
    return 0;
}