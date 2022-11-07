#include "iostream"

using namespace std;

class CPU {
public:
    virtual void calculator() = 0;
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
    Computer(CPU *cpu, VideoCard *vCard, Memory *mem) {
        m_cpu = cpu;
        m_vCard = vCard;
        m_mem = mem;
    }

    void work() {
        m_cpu->calculator();
        m_vCard->display();
        m_mem->storage();
    }

    //提供析构函数来释放3个零件
    ~Computer() {
        if (m_cpu != nullptr) {
            delete m_cpu;
            m_cpu = nullptr;
        }
        if (m_vCard != nullptr) {
            delete m_vCard;
            m_vCard = nullptr;
        }
        if (m_mem != nullptr) {
            delete m_mem;
            m_mem = nullptr;
        }
    }

private:
    CPU *m_cpu;
    VideoCard *m_vCard;
    Memory *m_mem;
};

//具体厂商 Intel
class IntelCPU : public CPU {
public:
    virtual void calculator() {
        cout << "Intel CPU" << endl;
    }
};

class IntelVideoCard : public VideoCard {
public:
    virtual void display() {
        cout << "Intel VideoCard" << endl;
    }

};

class IntelMemory : public Memory {
public:
    virtual void storage() {
        cout << "Intel Memory" << endl;
    }
};

//具体厂商 Lenovo
class LenovoCPU : public CPU {
public:
    virtual void calculator() {
        cout << "Lenovo CPU" << endl;
    }
};

class LenovoVideoCard : public VideoCard {
public:
    virtual void display() {
        cout << "Lenovo VideoCard" << endl;
    }

};

class LenovoMemory : public Memory {
public:
    virtual void storage() {
        cout << "Lenovo Memory" << endl;
    }
};

void test() {
    //创建第一台电脑
    Computer *computer = new Computer(new LenovoCPU, new IntelVideoCard, new IntelMemory);
    computer->work();
    cout << "------------------" << endl;
    //创建第二台电脑
    CPU *cpu2 = new IntelCPU;
    VideoCard *vc2 = new IntelVideoCard;
    Memory *mem2 = new LenovoMemory;
    Computer *computer2 = new Computer(cpu2, vc2, mem2);
    computer2->work();
}

int main() {
    test();
    return 0;
}