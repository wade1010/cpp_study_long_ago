#include "iostream"
#include "string"

void test();

using namespace std;


//左移运算符重载
class Person {
    friend ostream &operator<<(ostream &count, Person &p);

public :
    Person(int a, int b) {
        ma = a;
        mb = b;
    }

private:
    int ma;
    int mb;
};

ostream &operator<<(ostream &count, Person &p) {
    cout << "ma=" << p.ma << ",mb=" << p.mb << endl;
    return cout;
}

int main() {
    test();
    return 0;
}

void test() {
    Person m(10, 20);
    cout << m << endl;
}
