#include "iostream"

using namespace std;
//深拷贝与浅拷贝

class Person {
public:
    Person() {
        cout << "Person()" << endl;
    }

    Person(int age, int height) {
//        age = age;//同名的话，不能这么插座
        this->age = age;
        this->mHeights = new int(height);//手动申请，也需要手动释放
        cout << "Person(int age)" << endl;
    }

    ~Person() {
        //析构函数,将堆区开辟的数据做释放
        if (mHeights != NULL) {
            delete mHeights;
            mHeights = NULL;
        }
        cout << "~Person()" << endl;
    }

    Person(const Person &p) {
        age = p.age;
//        mHeights = p.mHeights;//编译器默认实现就是这行代码 浅拷贝
        mHeights = new int(*p.mHeights);
        cout << "Person的拷贝构造函数" << endl;
    }

    int age;

    int *mHeights;
};

void test01() {
    Person p(18, 160);
    cout << "p的年龄" << p.age << "身高为：" << *p.mHeights << endl;
    Person p2(p);
    cout << "p2的年龄" << p2.age << "身高为：" << *p2.mHeights << endl;
}

int main() {
    test01();
    return 0;
}