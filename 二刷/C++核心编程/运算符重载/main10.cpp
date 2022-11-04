#include "iostream"

using namespace std;

//赋值运算符重载
class Person {
public:
    Person() {

    }

    Person(int age) {
        m_Age = new int(age);
    }

    ~Person() {
        if (m_Age != nullptr) {
            delete m_Age;
            m_Age = nullptr;
        }
    }

    void operator=(const Person &p) {
        //编译器的 =赋值 提供的是浅拷贝  会发生内存重复释放的问题
//        m_Age = p.m_Age;
//        *m_Age = *p.m_Age;//如果m_Age没有初始化就会报错，比如提供了默认构造函数 如下面注释的代码
        /*
           Person p{10};
           Person p2{};
           p2 = p;
           这样地址直接复制就会报错
        */

        //应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
        /*
         * Person p{};
            Person p2{10};
            p2 = p;
            下面代码也会报错

        if (m_Age != nullptr) {
            delete m_Age;
            m_Age = nullptr;
        }
        m_Age = new int(*p.m_Age);
        */

        // 最好 改成如下  后来发现下面代码也有问题就是 p1=p1;自己复制给自己。所以再修改
//        if (p.m_Age != nullptr) {
//            if (m_Age != nullptr) {
//                delete m_Age;
//                m_Age = nullptr;
//            }
//            m_Age = new int(*p.m_Age);
//        }

        if (p.m_Age != nullptr && p.m_Age != m_Age) {
            if (m_Age != nullptr) {
                delete m_Age;
                m_Age = nullptr;
            }
            m_Age = new int(*p.m_Age);
        }

    }

    int *m_Age;
};

void test() {
    //提供无参构造，这样m_Age 可能为空
    Person p{};
    Person p2{10};
//    cout << "p年龄为：" << *p.m_Age << endl;
//    cout << "p2年龄为：" << *p2.m_Age << endl;
    p2 = p2;//堆区内存重复释放
//    cout << "p年龄为：" << *p.m_Age << endl;
    cout << "p2年龄为：" << *p2.m_Age << endl;
}

int main() {
    test();
    return 0;
}