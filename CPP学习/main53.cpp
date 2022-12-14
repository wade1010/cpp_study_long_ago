#include "iostream"
#include "string"

void test();

using namespace std;

class CPU {
public:
    virtual void calculate() = 0;
};

class VideoCard {
public:
    virtual void display() = 0;
};

class Memory {
public:
    virtual void storage() = 0;

};

class Computer {
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem) {
        m_cpu = cpu;
        m_vc = vc;
        m_memory = mem;
    }

    void work() {
        //让零件工作起来，调用接口
        m_cpu->calculate();
        m_vc->display();
        m_memory->storage();
    }

    //提供析构函数，释放3个电脑零件
    ~Computer() {
        if (m_cpu != NULL) {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_vc != NULL) {
            delete m_vc;
            m_vc = NULL;
        }
        if (m_memory != NULL) {
            delete m_memory;
            m_memory = NULL;
        }
    }

private:
    CPU *m_cpu;//CPU的零件指针
    VideoCard *m_vc;//显卡零件指针
    Memory *m_memory;//内存条零件指针

};

//具体厂商
//Intel
class IntelCPU : public CPU {
public:
    void calculate() {
        cout << "Intel的CPU开始计算" << endl;
    }
};

class IntelVideoCard : public VideoCard {
public:
    void display() {
        cout << "intel的显卡开始显示" << endl;
    }
};

class IntelMemory : public Memory {
public:
    void storage() {
        cout << "intel的内存条开始存储" << endl;
    }
};

//联想厂商
class LenovoCPU : public CPU {
public:
    void calculate() {
        cout << "Lenovo的CPU开始计算" << endl;
    }
};

class LenovoVideoCard : public VideoCard {
public:
    void display() {
        cout << "Lenovo的显卡开始显示" << endl;
    }
};

class LenovoMemory : public Memory {
public:
    void storage() {
        cout << "Lenovo的内存条开始存储" << endl;
    }
};

//虚析构和纯虚析构
int main() {
    test();
    return 0;
}

void test() {
    CPU *intelCpu = new IntelCPU();
    VideoCard *intelVideoCard = new IntelVideoCard();
    Memory *intelMemory = new IntelMemory();
    //创建第一台电脑
    Computer *c = new Computer(intelCpu, intelVideoCard, intelMemory);
    c->work();
    delete c;
    cout << "------------------------" << endl;
    //创建第二台电脑
    Computer *c2 = new Computer(new LenovoCPU(), new LenovoVideoCard, new LenovoMemory);
    c2->work();
    delete c2;

    cout << "------------------------" << endl;
    //创建第二台电脑
    Computer *c3 = new Computer(new LenovoCPU(), new IntelVideoCard, new LenovoMemory);
    c3->work();
    delete c3;
}
