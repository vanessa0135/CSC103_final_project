#include <iostream>

using namespace std;

class Person{

    private:
        string name;
        int health;
        
    public:
        Person(string name, int health);
        
};

Person::Person(string name, int health){
    this->name = name;
    this->health = health;
}

