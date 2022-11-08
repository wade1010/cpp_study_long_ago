#include "iostream"

using namespace std;

#include "MyArray.hpp"

template<class T>
void printInfo(MyArray<T> &arr) {
    for (int i = 0; i < arr.getSize(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*class Person;

template<>
void printInfo(MyArray<Person> &arr) {
    for (int i = 0; i < arr.getSize(); i++) {
        cout << "name=" << arr[i].m_Name << " age=" << arr[i].m_Age << endl;
    }
}*/

void test() {
    //有参构造
    MyArray<int> ma(5);
    //拷贝构造
    MyArray<int> ma2(ma);
    //赋值
    MyArray<int> ma3(100);
    ma3 = ma;
}

void test2() {
    //有参构造
    MyArray<int> ma(5);

    for (int i = 0; i < 5; i++) {
        ma.pushBack(i);
    }
    cout << "ma的打印输出为：" << endl;
    printInfo(ma);
    cout << "ma容量：" << ma.getCapacity() << endl;
    cout << "ma大小：" << ma.getSize() << endl;

    MyArray<int> ma2(ma);
    cout << "ma2 的打印输出为：" << endl;
    printInfo(ma2);
    cout << "ma2容量：" << ma.getCapacity() << endl;
    cout << "ma2大小：" << ma.getSize() << endl;
    ma2.popBack();
    cout << "ma2 尾删后的打印输出为：" << endl;
    printInfo(ma2);
    cout << "ma2 尾删后容量：" << ma2.getCapacity() << endl;
    cout << "ma2 尾删后大小：" << ma2.getSize() << endl;

    cout << "ma2[0]的值为：" << ma2[0] << endl;
    ma2[0] = 100;
    cout << "ma2[0]=100 后 ma2[0]的值为：" << ma2[0] << endl;
}

//测试自定义类型
class Person {
public:
    Person() {}

    Person(string name, int age) {
        m_Name = name;
        m_Age = age;
    }

    string m_Name;
    int m_Age;
};

template<>
void printInfo(MyArray<Person> &arr) {
    for (int i = 0; i < arr.getSize(); i++) {
        cout << "name=" << arr[i].m_Name << " age=" << arr[i].m_Age << endl;
    }
}

void test3() {
    MyArray<Person> ma(5);
    Person p1("孙悟空", 100);
    Person p2("猪八戒", 99);
    Person p3("沙僧", 98);
    Person p4("白龙马", 97);
    Person p5("唐僧", 1000);
    ma.pushBack(p1);
    ma.pushBack(p2);
    ma.pushBack(p3);
    ma.pushBack(p4);
    ma.pushBack(p5);
    printInfo(ma);
    cout << "容量" << ma.getCapacity() << endl;
    cout << "大小" << ma.getSize() << endl;
}


int main() {
    test();
    test2();
    test3();
    return 0;
}