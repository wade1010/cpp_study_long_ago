#include "iostream"
#include "string"

using namespace std;

//多态

class Animal {
public:
    void speak() {
        cout << "动物在说话" << endl;
    }

};

class Animal2 {
public:
    virtual void speak() {
        cout << "动物在说话" << endl;
    }

};

class Cat : public Animal {

};

class Cat2 : public Animal2 {

};


void test2() {
    cout << "sizeof(Animal)=" << sizeof(Animal) << endl;
    cout << "sizeof(Animal2)=" << sizeof(Animal2) << endl;
    cout << "sizeof(Cat)=" << sizeof(Cat) << endl;
    cout << "sizeof(Cat2)=" << sizeof(Cat2) << endl;
}

int main() {
    test2();
    return 0;
}