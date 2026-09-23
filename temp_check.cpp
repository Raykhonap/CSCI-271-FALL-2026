#include <iostream>  //loads the libary,allows the program to use input (allows us to read what users type)/output (allows us to send text to the user)
using namespace std;  //Allows us to use cin/cout without typing std:: every time we use it

int main () {        //Execution gonna start in the main () marks the begging of the code 
int temp;             // Declares an variable for tempature
  cout << "Hi \t";       //Prints HI to the screen and horizonatlly gives space as keyboards "tab" would
  cout << "Enter The Tempature (F):";      //Asks the user and prints Enter The Tempature (F): on the users screen
  cin >> temp;                           // Allows the user enter tempature

if (temp >= 76) {               //If the tempature is greater than or equal to 76 then it prints on the screen Hot or else it skips this line 
  cout << "That's Hot." << endl;
}
else if (temp >= 60) {          //If tempature is greather than or equal to 60 then Mild will be printed on the screen or else it also gets skipped
  cout <<"That's Mild." << endl;
}
else if (temp >= 32) {         //If tempature is greather than or equal to 32 then Cold will be printed on the screen or else it will be skipped
  cout << " That's Cold." << endl;
}
  else  {                    //If tempature does not fit in on the top variables and its less than 32 then Freezing will be printed on the screen
  cout << " That's Freezing." << endl; 
}
  return 0;                  //The End 
}
