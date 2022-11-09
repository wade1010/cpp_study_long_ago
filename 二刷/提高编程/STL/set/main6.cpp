#include "iostream"
#include "set"
using namespace std;
class Person
{
public:
    Person(string name, int age)
    {
        m_Name = name;
        m_Age = age;
    }
    string m_Name;
    int m_Age;
};

class comparePerson
{
public:
    bool operator()(const Person &p1, const Person &p2)
    {
        return p1.m_Age > p2.m_Age;
    }
};

void test()
{
    set<Person, comparePerson> s;

    Person p1("fad", 23);
    Person p2("sgdf", 27);
    Person p3("hgf", 25);
    Person p4("grwe", 21);

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << "name: " << it->m_Name << " age: " << it->m_Age << endl;
    }
}
int main()
{
    test();
    return 0;
}