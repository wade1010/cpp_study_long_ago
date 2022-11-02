#include "iostream"
#include "string"
#include "fstream"

using namespace std;

/*
 *类模板与继承
 */
template<typename T>
class Base {
public:
    T m;

};

//class Son : public Base {//报错 必须要知道父类中的T的类型，才能继承
class Son : public Base<int> {//不报错  必须要知道父类中的T的类型，才能继承


};

//如果想灵活指定父类中的T类型，子类也需要变成类模板

template<class T1, class T2>
class Son2 : public Base<T2> {
public:
    Son2() {
        cout << "T1的类型为：" << typeid(T1).name() << endl;
        cout << "T2的类型为：" << typeid(T2).name() << endl;
    }

    T1 obj;
};

void test() {
    Son s;  
}

void test2() {
    Son2<int,char> s;

}

int main() {
//    test();
    test2();
    return 0;
}