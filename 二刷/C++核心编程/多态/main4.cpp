#include "iostream"

using namespace std;

//多态案例2 制作饮品
class AbstractDrink {
public:
    //煮水
    virtual void Boil() = 0;

    //冲泡
    virtual void Brew() = 0;

    //倒入杯中
    virtual void PourInCup() = 0;

    //加入辅料
    virtual void PutSomething() = 0;

    //制作饮品
    void makeDrink() {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

class Coffee : public AbstractDrink {
public:
    //煮水
    virtual void Boil() {
        cout << "咖啡煮水" << endl;
    }

    //冲泡
    virtual void Brew() {
        cout << "咖啡冲泡" << endl;
    }

    //倒入杯中
    virtual void PourInCup() {
        cout << "咖啡倒入杯中" << endl;
    };

    //加入辅料
    virtual void PutSomething() {
        cout << "咖啡加入辅料" << endl;
    }
};

class Tea : public AbstractDrink {
public:
    //煮水
    virtual void Boil() {
        cout << "茶叶煮水" << endl;
    }

    //冲泡
    virtual void Brew() {
        cout << "茶叶冲泡" << endl;
    }

    //倒入杯中
    virtual void PourInCup() {
        cout << "茶叶倒入杯中" << endl;
    };

    //加入辅料
    virtual void PutSomething() {
        cout << "茶叶加入辅料" << endl;
    }
};

void doWork(AbstractDrink *ad) {
    ad->makeDrink();
    delete ad;//释放
}

int main() {
    doWork(new Coffee);
    cout << "------------------------" << endl;
    doWork(new Tea);
    return 0;
}