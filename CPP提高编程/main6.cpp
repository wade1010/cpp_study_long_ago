#include "iostream"
#include "string"
#include "fstream"

using namespace std;

/*
 *类模板
 */

template<class NameType, class AgeType>
class Person {
public:
    Person(NameType n, AgeType a) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << this->name << " " << this->age << endl;
    }

    NameType name;
    AgeType age;
};

void test();

int main() {
    test();
    return 0;
}

void test() {
    Person<string, int> p("哈哈", 11);
    p.showPerson();
    Person<int, double> p2(1, 11.2);
    p2.showPerson();
}
