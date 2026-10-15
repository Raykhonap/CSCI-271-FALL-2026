#include <iostream> // standard libary allows inputs from user and sends output
using namespace std; // alows to use cin and cout without typing std every time 

int main () {     // main funcution where the program begings running
const int SIZE = 5; //creates a permanet whole integer constant named size with value of 5
int score[SIZE]; // declares an variable container that can store up to 5 integer numbers.

    int sum = 0;  // gives the variable sum a starting value of 0
    int highest = 0; // highest variable starts at 0 until users score replaces 
    int lowest = 0; // lowest variable starts at 0 until users score replaces 

    for (int i = 0; i < SIZE; i++) { // starts a loop that aks only 5 times
 cout << "Enter score " << (i + 1) << ": "; // prints enter score 1 score 2 up till score 5.
 cin >> score[i];  // allows user to enter their score
 
 sum += score[i];   // adds new score to the total 
  
if (i == 0) {  // starting point for both highest and lowest before any scores is entered
highest = score[0]; // takes users input and decides to put in highest 
lowest = score[0]; // takes users input and decides to put in lowest 
} else {           // checks rest of the scores 
if (score[i] > highest) highest = score[i]; // replaces high score with new input highest score
if (score[i] < lowest) lowest = score[i]; //replaces current low score with new inputted lowest score
}
}
cout << "Scores:"; // prints Scores:
for (int i = 0; i < SIZE; i++) { 
cout << " " << score[i];  // loops through and prints all 5 scores 
}
cout << endl;
cout << "Sum: " << sum << endl; // prints the total added sum of all scores
cout << "Average: " << static_cast<double>(sum) / SIZE << endl; // divides the sum by 5 to print the decimal average.
cout << "Highest: " << highest << endl; // prints final  highest score found
cout << "Lowest: " << lowest << endl; // prints final  lowest score found

return 0;     // program ends
}
