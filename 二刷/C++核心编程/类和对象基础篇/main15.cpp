#include "iostream"

using namespace std;

//成员函数作友元
class Building;

class GoodGay {
public:
    GoodGay();//锻炼下类外实现

    void visit();//让visit可以访问Building中私有成员

    void visit2();//让visit2不可以访问Building中私有成员
    Building *building;
};

class Building {
    friend void GoodGay::visit();

public:
    Building();//锻炼下类外实现

    string m_SittingRoom;
private:
    string m_BedRoom;

};
//类外实现成员函数

Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
    building = new Building;
}

void GoodGay::visit() {
    cout << "visit正在访问" << building->m_SittingRoom << endl;
    cout << "visit正在访问" << building->m_BedRoom << endl;
}

void GoodGay::visit2() {
    cout << "visit2正在访问" << building->m_SittingRoom << endl;
//    cout << "visit2正在访问" << building->m_BedRoom << endl;//报错
}

void test1() {
    GoodGay gg;
    gg.visit();
    gg.visit2();
}

int main() {

    test1();
    return 0;
}