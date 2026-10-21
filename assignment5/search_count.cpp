// Raykhona Pulotova - Assignment #5 - CSCI

#include <iostream> // standard libary allows inputs from user and sends output
using namespace std; // alows to use cin and cout without typing std every time 

void printForward(const int arr[], int size) { // declares printForward that takes an array and its size, but gives nothing back when it's done
cout << "Forward:";  // prints foward to the screen
for (int i = 0; i < size; i++) {  // loop to check every single number from begging  to end
cout << " " << arr[i];  // prints each number with a space in front of it
}
cout << endl;  // moves to new space 
}
void printReverse(const int arr[], int size) { // declares tool named printReverse to print items backward
cout << "Reverse:"; // prints "Reverse:" out to the screen
for (int i = size - 1; i >= 0; i--) { // countdown starts at index and counts backward down until it reaches 0
cout << " " << arr[i]; // prints each number backward with a space
}
cout << endl; // creates a new space
}
int countAbove(const int arr[], int size, int limit) {  // declares tool that takes an array, its size, and a limit number, and returns a whole number answer the count
int count = 0; // creates storebox that starts at 0
for (int i = 0; i < size; i++) { // loops through every single item in the array from the first number to the last
if (arr[i] > limit) { // keeps in check the current gretaer number with users input
count++; // if its  bigger, it adds 1 to our tally.
}
} return count; // sends the final tally back to main
} int main() {  // main program where the computer begins running teh code
const int SIZE = 6; // declares fixed box for the array size, set permanently to 6
int values[SIZE] = {14, 3, 27, 9, 50, 21}; // creates array list containing the 6 preset numbers
printForward(values, SIZE); // calls  first function to print the list normally
printReverse(values, SIZE); // calls  second function to print the list backward
int limit;      // creates an empty variable to store  number the user puts
cout << "Count values above: "; // prints, asking the user to type a limit
cin >> limit; // allows the user to enter limit

int result = countAbove(values, SIZE, limit); // runs the counting machine, waits for it to finish, and saves the final number it hands back into a box called result
cout << "Count: " << result << endl; // prints out the final count result on the screen

    return 0; // program ends 
}
