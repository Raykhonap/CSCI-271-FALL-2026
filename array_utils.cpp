#include <iostream>
using namespace std;
void printForward(const int arr[], int size) { // Prints the array in original order
cout << "Forward:";
for (int i = 0; i < size; i++) {// Begins from start to finish
cout << " " << arr[i];
    }
 cout << endl;
} // Prints the array backward
void printReverse(const int arr[], int size) {
cout << "Reverse:";
for (int i = size - 1; i >= 0; i--) {  // Starts at the last item and goes down to 0
cout << " " << arr[i];
}cout << endl;
}// Counts how many numbers are bigger than the user's limit
int countAbove(const int arr[], int size, int limit) {
int count = 0;                         // Scorekeeper starting at 0
for (int i = 0; i < size; i++) {       // Loops through every number
if (arr[i] > limit) {              // If the number is bigger than the limit
count++;                       // add 1 to the score
 }
    }
return count;                          // Sends the final total back
}
int main() {
const int SIZE = 6;                    // Fixe size of the array
int values[SIZE] = {14, 3, 27, 9, 50, 21}; // The 6 preset numbers

printForward(values, SIZE);            // Prints list normally
printReverse(values, SIZE);            // Prints list backward

int limit;                             // Box to hold user's limit number
cout << "Count values above: ";        // Asks user for a limit
cin >> limit;                          // Waits for user to type it

int result = countAbove(values, SIZE, limit); // Runs count function and saves answer
cout << "Count: " << result << endl;   // Prints the final count answer

return 0;                              // Ends program 
