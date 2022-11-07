#include "iostream"

using namespace std;

//虚析构和纯虚析构
class Animal {
public:
    Animal() {
        cout << "Animal构造函数调用" << endl;
    }

    //利用虚析构可以解决 父类指针释放子类对象时不干净的问题
//    virtual ~Animal() {
//        cout << "Animal的析构函数调用" << endl;
//    }
    //纯虚析构 需要声明，也需要实现（类外实现）
    //有了纯虚析构之后，这个类属于抽象类，无法实例化
    virtual  ~Animal() = 0;

    //纯虚函数
    virtual void speak() = 0;
};

Animal::~Animal() {
    cout << "Animal纯虚析构函数调用" << endl;
}

class Cat : public Animal {
public:
    Cat(string name) {
        cout << "Cat的构造函数调用" << endl;
        m_Name = new string(name);
    }

    ~Cat() {
        if (m_Name != nullptr) {
            cout << "Cat析构函数调用" << endl;
            delete m_Name;
            m_Name = nullptr;
        }
    }

    virtual void speak() {
        cout << *m_Name << "小猫在说话" << endl;
    }

    string *m_Name;
};

void test1() {
    Animal *animal = new Cat("Tom");
    animal->speak();
    //父类指针在析构的时候，不会调用子类中析构函数，
    // 导致子类如果有堆区的属性，会出现内存泄漏
    delete animal;
}

int main() {
    test1();
    return 0;
}