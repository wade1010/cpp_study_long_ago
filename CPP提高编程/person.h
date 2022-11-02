#ifndef FIRST_DEMO_PERSON_H
#define FIRST_DEMO_PERSON_H

#endif //FIRST_DEMO_PERSON_H

template<class T1, class T2>
class Person {
public:
    Person(T1 n, T2 a);

    void showPerson();

    T1 name;
    T2 age;
};