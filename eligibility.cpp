#include <iostream>                          // Allows us to read what users type and allows us to send text to the user        
using namespace std;                          //Lets us use cin/cout without typing std:: every time we use it

int main () {                                    //Marks the begging ofteh code
int age;                                        // Declare age variable where you can add whole numbers
int member;                                    // Declares member variable where we will use to see if ones a memebr

cout << "Enter your age?" << endl;             // Sends output to the screen asking for users age
cin >> age;                                    // Allows theh user enetr their age
cout << "Are you a member?" << "(1=Yes, 0=No)";  // Sends an output asking users if theyre member where tehy have  to respond with 1 for yes and 0 for no 
cin >> member;                                     //Allows users enter their response
if (( age >=60) || (age >= 18 && member == 1))  // If users age is greater than or equal to  60 or their age is older or equal to 18 and theyre a member
  {
  cout << " You qualify for the discount!" <<endl; // Then it will print in the csreen that they qualify for the discount 
}
  else {
    cout << "You do not qualify for the discount!" <<endl; // If they dont fit the category then they do not qualify for the discount will be printed 
  }
  return 0;                   // Ending
}
