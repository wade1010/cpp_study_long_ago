#include "iostream"
#include "string"

void test();

using namespace std;

//赋值运算符重载
class Person {
public:
    Person(int age) {
        mAge = new int(age);
    }

    ~Person() {
        if (mAge != NULL) {
            delete mAge;
            mAge = NULL;
        }
    }

    Person &operator=(const Person &p) {
        //编译器提供的是浅拷贝，就是mAge=p.mAge;
        //应该先判断是否有属性在堆区，如果有先释放干净。
        if (mAge != NULL) {
            delete mAge;
            mAge = NULL;
        }
        mAge = new int(*p.mAge);
        return *this;
    }

    int *mAge;

};

void test() {
    Person p(18);
    cout << *p.mAge << endl;
    Person p2(20);
    cout << *p2.mAge << endl;
    Person p3(30);
    p3 = p2 = p;
    cout << *p2.mAge << endl;
    cout << *p3.mAge << endl;
}

int main() {
    test();
    return 0;
}


