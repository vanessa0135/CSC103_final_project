#include <iostream>

using namespace std;

class Location{

    private:
        string name;
        string description;   

    public:
    Location(string name, string description);
       
};

Location::Location(string name, string description){
    this->name = name;    
    this->description = description;
}

