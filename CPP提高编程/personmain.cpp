#include "iostream"
#include "string"
#include "fstream"

//第一种解决方式，直接包含 源文件，但是这个很少用
//#include "person.cpp"


using namespace std;

//第二种方式，将.h和.cpp中的内容写到一起，将后缀名该问.hpp文件
#include "person.hpp"

/*
 * 类模板分文件编写问题以及解决
 */
//template<class T1, class T2>
//class Person {
//public:
//    Person(T1 n, T2 a);
//
//    void showPerson();
//
//    T1 name;
//    T2 age;
//};

////构造函数类外实现
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 n, T2 a) {
//    this->name = n;
//    this->age = a;
//}
//
////成员函数类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//    cout << this->name << " " << this->age << endl;
//}


void test() {
    Person<string, int> p("tom", 20);
    p.showPerson();

}

int main() {
    test();
    return 0;
}