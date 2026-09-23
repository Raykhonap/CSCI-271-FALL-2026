#include <iostream>                          // Allows us to read what users type and allows us to send text to the user        
using namespace std;                          //Lets us use cin/cout without typing std:: every time we use it

int main () {                                    //Marks the beginning of the code
int age;                                        // Declare age variable where you can add whole numbers
int member;                                    // Declares member variable where we will use to see if  a user is a member

cout << "Enter your age?" << endl;             // Sends output to the screen asking for users age
cin >> age;                                    // Allows the user enter their age
cout << "Are you a member?" << "(1=Yes, 0=No):";   // Sends an output asking users if theyre member where they have  to respond with 1 for yes and 0 for no 
cin >> member;                                     //Allows users enter their response
if (( age >=60) || (age >= 18 && member == 1))  // If users age is greater than or equal to  60 or their age is older or equal to 18 and theyre a member
  {
  cout << " You qualify for the discount!" <<endl; // Then it will print in the screen that they qualify for the discount 
}
  else {
    cout << "You do not qualify for the discount!" <<endl; // If they dont fit the category then they do not qualify for the discount will be printed 
  }
  return 0;                   // Ending
}
