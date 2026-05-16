#include <iostream>

using namespace std;



void startGame(){
   //calls scene1
   //clue1
   //clue2
   cout << "this is startGame()";
   cin.ignore();
   cin.get();
}
void instructions(){
   //explains the plot + how the game works
   cout << "this is instructions()";
   cin.ignore();
   cin.get();
}

void scene1(){
   //this is the part where the user is chilling and they get a mysterious message

}

void firstClue(){
   //write the plot for navigating to find your first clue which is central park
}

void secondClue(){
   //write the plot for navigating to find your second clue which is liberty island
}

void thirdClue(){
   //write the plot for navigating to find your third clue which is high line
}

void puttingCluesTogether(){
   //write the plot for the user input for their guess on what the secret location is
}

void yellowTrainline(){
   //write the delays for the 'yellow' train line which is the N, W, or R
}

void orangeTrainLine(){
   //write the delays for the 'orange' trian line which is the B or D
}

//.... more functions to come
void welcomeParagraph(){
   //write the welcome 'page' - include some ascii art
   cout << "\nWelcome to [insert game title!]" << endl;
   cout << "           W            __  __" << endl;
   cout << "          [ ]          |::||::|" << endl;
   cout << "           3   ._.     |::||::|   ._." << endl;
   cout << "          /|   |:| ._. |::||::|   |/|" << endl;
   cout << "      \\|// /   |:|_|/| |::||::|_  |/|" << endl;
   cout << "     -( )-|    |:|\"|/|_|::||::|\\|_|/| _" << endl;
   cout << "      J V |    |:|\"|/|||::||::|\\|||/||:|" << endl;
   cout << "___  '    /  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
   cout << "\\  \\/    |        ~~~ ~~~ ~~~~~ ~~~~~";
   
}

int main () {
   welcomeParagraph();
      

   while(true){
      cout << "\nMenu:" << endl;
      cout << "1. Instuctions\n2. Play\n3. Exit\n";

      cout << "Please enter your choice: " << endl;
      int userInput;
      cin >> userInput;

      if(userInput == 1){
         instructions();

      
   }
      else if(userInput == 2){
         startGame();
   }
      else if(userInput == 3){
      break;
   }
      else{
      // cin.ignore();
      // cin.get();
      cout << "\nThis is not one of the choices, try again!" << endl;
      
      
      
      
      // cin.clear();
      // cin.ignore(1000, '\n'); //clear input
   

   }

   }
   
   
   return 0;
}