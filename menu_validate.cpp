#include <iostream>     // Allows the program to use input (allows us to read what users type)/output.
using namespace std;   // Allows using cin and out without repeatidly using std::.

int main () {        // Marks the beginning of the code.
int number=1;       // Declares and Initializes number 1
do {                // Runs the code 1st time 2nd time checks the code.
cout << "Enter a number from 1,2 or 3 "; // Prints output to the screen to choose a number from 1-3.
cin >> number;                    // Allows the user enter an number.
if (number < 1 || number > 3 ) {   // Loop checks if the number is greater than 3 or less than 1.
cout << "Invalid choice, try again" << endl; } //If number does not pass the codnition, there will be output printed on the csreen to ry again.
}
while (number < 1 || number > 3 ); { //It tests the users input when the condition is less than 1 bigger than 3 it jumps back to repeat the "do" block.
cout << "You selected option  " << number << "." << endl; } // If the condition is not true then your selected option will be printed out.
return 0; // The program ends.
}
