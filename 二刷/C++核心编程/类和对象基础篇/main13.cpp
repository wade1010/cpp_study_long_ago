#include "iostream"

using namespace std;

//全局函数作友元
class Building {
    //告诉编译器 goodGay全局函数是Building的好朋友，可以访问Building中私有成员
    friend void goodGay(Building *building);

public:
    Building() {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

    string m_SittingRoom;
private:
    string m_BedRoom;

};

//全局函数
void goodGay(Building *building) {
    cout << "好基友全局函数 正在访问:" << building->m_SittingRoom << endl;//可以访问
    cout << "好基友全局函数 正在访问:" << building->m_BedRoom << endl;//报错
}

void test1() {
    Building building;
    goodGay(&building);
}

int main() {
    test1();
    return 0;
}