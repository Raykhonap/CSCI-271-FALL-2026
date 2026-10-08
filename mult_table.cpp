# include <iostream>  // header file main libary or the toolbox.
using namespace std;    // allows us to type cin and cout without using std:: every time.

int main () {          // Marks the beggining of the code.
int number;            // Declaring the variable number.

cout << "Enter a number   ";    //Prints "Enter a number" out to the screen.
cin >> number;                  // Allows the user type a number.

for (int i=1; i<=10; i++) {     // loop of numbers from 1 to 10

cout << number << " x " << i << " = " << (number * i) << endl; 
}                              //Initializes i to 1, checks the condition every loop and lastly it adds one to the counter variable itslef.
return 0;  // End of the program.
}
