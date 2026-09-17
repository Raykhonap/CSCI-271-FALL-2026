#include <iostream>                        // Its the tool kit / starter 
#include <string>                          // It gives access to the string type, which allows us to create string variables 
using namespace std;                       //it allows us to use the cin/cout without using std:: every time
int main ()                                // Execution will start inside the main (), marks the beginning of the code 
{
string name;                               // Declares a variable to store users name 
int age;                                  // Declares a variable to store the users age [whole number]
cout << "What is your name and age?";     //Prints an prompt on the screen asking users name and age
cin >> name >> age;                       // Allows the user enter their name and age
cout  << "Hello, I am" << name << "I am" << age << "years old";  // Prints the output introduction of users name and age
return 0;                                                        // The End (program ends)
}
