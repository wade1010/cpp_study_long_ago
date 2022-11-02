#include "iostream"
#include "string"

using namespace std;

//虚析构和纯虚析构
class Animal {
public:
    Animal() {
        cout << "Animal 构造函数" << endl;
    }

//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
//    virtual   ~Animal() {
//        cout << "Animal 虚析构函数" << endl;
//    }

    //或者纯虚析构  二者选其一
    //有了纯虚析构 之后，这个类也属于抽象类 无法实例化
    virtual  ~Animal() = 0;

    //纯虚函数
    virtual void speak() = 0;

};

Animal::~Animal() {
    cout << "Animal 纯虚析构函数" << endl;
}

class Cat : public Animal {
public:
    Cat(string n) {
        cout << "Cat 构造函数" << endl;
        name = new string(n);
    }

    ~Cat() {
        cout << "Cat 析构函数" << endl;
        if (name != NULL) {
            delete name;
            name = NULL;
        }
    }

    void speak() {
        cout << "cat speak" << endl;
    }

    string *name;

};

void test();

int main() {
    test();
    return 0;
}

void test() {
    Animal *a = new Cat("Tom");
    a->speak();
    delete a;
}
