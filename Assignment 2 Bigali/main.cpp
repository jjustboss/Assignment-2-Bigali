#include <iostream>
#include "Person.h"
#include <vector>
#include <time.h>
#include <random>
using namespace std;

void createVectorOfPeople(vector<Person>& people) {
    string name;
    int age;
    int luck;

    for (int i = 0; i < 5; i++) {
        srand (time(NULL));

        cout << "Input the name: " << endl;
        cin >> name;
        cout << "Input the age: " << endl;
        cin >> age;
        luck = rand() % 20 + 1;             //number between 1 and 20:
        Person tempPerson(name, age, luck);
        people.push_back(tempPerson);       //adding to the vector
    }
}
void Peoplepeople(const vector<Person>& people){
    for (int i=0; i<5; i++){
        cout<<i+1<<") "<<"Name: "<<people.at(i).getName()<<endl;
        cout<<"Age: "<<people.at(i).getAge()<<endl;
        cout<<"Luck: "<<people.at(i).getLuck()<<endl;
    }
}
Person Luckiest(const vector<Person>& people){
    int max = 0;
    Person tempPerson = Person();
    for (int i=0; i<5; i++){
        if (people.at(i).getLuck()>max){
            max=people.at(i).getLuck();
            tempPerson=people.at(i);
        }
    }
    return tempPerson;
}
void changeLuck(Person& person1, Person& person2){
    int tempLuck = person1.getLuck();

    person1.setLuck(person2.getLuck());
    person2.setLuck(tempLuck);
}
extern "C"
{
int printf(const char *format,...);
}

class RollsRoyse{
    int a;
    int b;
public:
    RollsRoyse(){}
    RollsRoyse(int x, int y) : a(x), b(y){}

    void setA(int a) {
        RollsRoyse::a = a;
    }

    void setB(int b) {
        RollsRoyse::b = b;
    }

    int getA() const{
        return a;
    }

    int getB() const {
        return b;
    }



};

