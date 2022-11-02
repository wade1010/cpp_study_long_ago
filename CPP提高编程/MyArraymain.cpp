#include "string"
#include "iostream"

using namespace std;

#include "CPP提高编程/MyArray.hpp"

void printIntArr(MyArray<int> &arr) {
    for (int i = 0; i < arr.getSize(); i++) {
        cout << arr[i] << endl;
    }
}

void test() {
    MyArray<int> arr1(5);
    for (int i = 0; i < 5; i++) {
        arr1.PushBack(i);
    }
    cout << "arr1的打印输出为：" << endl;
    printIntArr(arr1);
    cout << "arr1的容量为：" << arr1.getCapacity() << endl;
    cout << "arr1的大小为：" << arr1.getSize() << endl;
    MyArray<int> arr2(arr1);
    cout << "arr2的打印输出为：" << endl;
    printIntArr(arr2);
    arr2.PopBack();
    cout << "arr2尾删后：" << endl;
    cout << "arr2的容量为：" << arr2.getCapacity() << endl;
    cout << "arr2的大小为：" << arr2.getSize() << endl;

}

//测试自定义数据类型
class Person {
public:
    Person() {//这里不写默认构造函数      MyArray<Person> arr1(5); 这里会报错

    }

    Person(string n, int a) {
        name = n;
        age = a;
    }

    string name;
    int age;

};

void printPersonArray(MyArray<Person> &arr) {
    for (int i = 0; i < arr.getSize(); i++) {
        cout << arr[i].name << " " << arr[i].age << endl;

    }

}

void test2() {
    MyArray<Person> arr1(10);
    for (int i = 0; i < 5; i++) {
        Person p("name" + to_string(i), i + 10);
        arr1.PushBack(p);
    }

    printPersonArray(arr1);

    cout << "arr1的容量为：" << arr1.getCapacity() << endl;
    cout << "arr1的大小为：" << arr1.getSize() << endl;


}

int main() {
//    test();
    test2();
    return 0;
}