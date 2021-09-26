//
// Created by Admin on 26.09.2021.
//

#ifndef ASSIGNMENT_2_BIGALI_PERSON_H
#define ASSIGNMENT_2_BIGALI_PERSON_H


using namespace std;

class Person{
private:
    string name;
    int age;
    int luck;
public:
    Person(const string &name, int age, int luck);

    Person(const string &name);

    Person();

    const string &getName() const;

    int getAge() const;

    int getLuck() const;

    void setName(const string &name);

    void setAge(int age);

    void setLuck(int luck);
};

#endif //ASSIGNMENT_2_BIGALI_PERSON_H
