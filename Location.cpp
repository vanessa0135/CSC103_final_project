#include <iostream>

using namespace std;

class Location{

    private:
        string name;
        string description;   

    public:
    Location(string name, string description);
    string getName();
    string getDescription();
       
};

Location::Location(string name, string description){
    this->name = name;    
    this->description = description;
}

string Location::getName(){
    return name;
}

string Location::getDescription(){
    return description;
}
