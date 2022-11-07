#include "iostream"

using namespace std;
class Animal {
public:
     virtual void speak(){
        cout << "动物在说话" << endl;
    }
};
class Cat: public Animal {
public:
    virtual void speak(){
        cout << "小猫在说话" << endl;
    }
};
void speak(Animal & animal){
    animal.speak();
}
void test1(){
    Cat cat;
    speak(cat);
}
int main() {
    test1();
    return 0;
}