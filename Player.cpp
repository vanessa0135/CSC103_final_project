#include <iostream>
#include <vector>

#include "Item.cpp"

using namespace std;
/*This file declares the contructor, setter functions, and getter functions for Player
Player
    - A player represents the user who is playing this game
    - The plot follows along the Player's status updating their attributes like time, money, cluesFound, and backpack

*/

class Player{

    private:
        //the attributes that a Player object would have
        string name;
        int money;
        int time;
        int cluesFound; // this variable counts how many clues they have found
        vector<Item> backpack = {}; /*backpack represents the collected items the user finds throughout their adventure
                                    if they find a new item, it would be appended to the vector */ 
        
    public:
        //constructor of Player object
        Player(string name, int money, int userTime);

        //setter/mutator functions
        void setAmount(int num);
        void decreaseMoney(int deduction);
        void increaseMoney(int increase);

        void setTime(int totalMins);
        void decreaseTime(int decreaseMins);
        void increaseTime(int increaseMins);

        void increaseCluesFound();

        //getter functions
        int getCurrentMoney();
        int getTimeSpent();

        void printInfo();
 
};

Player::Player(string name, int money, int userTime){
    this->name = name;
    this-> money = money;
    this->time = userTime;
    cluesFound = 0;
}

void Player::setAmount(int num){
    money = num;
}

void Player::decreaseMoney(int deduction){
    money -= deduction;
}
void Player::increaseMoney(int increase){
    money += increase;
}

void Player::setTime(int totalMins){
    time = totalMins;
}

void Player::decreaseTime(int decreaseMins){
    time -= decreaseMins;
}

void Player::increaseTime(int increaseMins){
    time += increaseMins;
}

void Player::increaseCluesFound(){
    cluesFound += 1;
}

int Player::getCurrentMoney(){
    return money;
}

int Player::getTimeSpent(){
    return time;
}

void Player::printInfo(){
    cout << "Name: " << name << endl;
    cout << "Total Money: " << money << endl;
    cout << "Time Limit: " << time << endl;

}

