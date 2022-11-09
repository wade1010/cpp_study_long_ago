#include "iostream"
#include "list"
using namespace std;
//排序案例
class Person
{
public:
    Person(string name, int age, int height)
    {
        mage = age;
        mname = name;
        mheight = height;
    }
    string mname;
    int mage;
    int mheight;
};

void printList(const list<Person> &l)
{
    for (list<Person>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << it->mname << " " << it->mage << " " << it->mheight << endl;
    }
}
bool myCompare(const Person &p1, const Person &p2)
{
    if (p1.mage == p2.mage)
    {
        return p1.mheight > p2.mheight;
    }
    return p1.mage < p2.mage;
}
void test()
{
    Person p1("a", 33, 178);
    Person p2("b", 45, 172);
    Person p3("c", 22, 183);
    Person p4("d", 22, 156);
    Person p5("e", 22, 188);

    list<Person> l;
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);

    cout << "before sort:" << endl;
    printList(l);
    l.sort(myCompare);
    cout << "after sort:" << endl;
    printList(l);
}
int main()
{
    test();
    return 0;
}