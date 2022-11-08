
#include "person.hpp"

void test()
{
    Person<string, int> p("bob", 100);
    p.showPerson();
}
int main()
{
    test();
    return 0;
}