#include "iostream"

using namespace std;

class AbstractCalculator {
public:
    virtual int getResult() = 0;

    int m_Num1;
    int m_Num2;
};

class AddCalculator : public AbstractCalculator {
public:
    virtual int getResult() {
        return m_Num1 + m_Num2;
    }
};

class SubCalculator : public AbstractCalculator {
public:
    virtual int getResult() {
        return m_Num1 - m_Num2;
    }
};

class MulCalculator : public AbstractCalculator {
public:
    virtual int getResult() {
        return m_Num1 * m_Num2;
    }
};

void test() {
//多态使用：父类指针或者引用指向子类对象
    AbstractCalculator *ac = new MulCalculator;
    ac->m_Num1 = 10;
    ac->m_Num2 = 20;
    cout << ac->getResult() << endl;
    //开辟在堆区，用完记得销毁
    delete ac;
}

int main() {
    test();
    return 0;
}