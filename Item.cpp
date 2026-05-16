#include <iostream>
#include <vector>

using namespace std;


class Item {
    private:
        string name;
        string description;
        //divides from the "clues for the final location" and the "clues for the next location" throughout the plot
        bool isClue;
        //this 'backpack' holds is supposed to hold the 3 objects the user must find in order to find the secret location
        vector<string> clues;

public:
    Item(/* args */);
    ~Item();
};

Item::Item(/* args */)
{
}

Item::~Item()
{
}
