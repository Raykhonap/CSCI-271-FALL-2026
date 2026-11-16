#include <iostream> // lets us print and read text
#include <vector>   // lets us use a list that can grow
using namespace std; // lets us write short commands

int main() { // program starts here
    vector<int> grades; // make an empty list for numbers
    int numGrades; // variable to hold how many grades you want

    cout << "How many grades do you want to enter? "; // ask the user
    cin >> numGrades; // get the answer from the user

    // repeat this loop for each grade
    for (int i = 0; i < numGrades; i++) {
        int g; // temporary box for one grade
        cout << "Enter grade " << (i + 1) << ": "; // ask for grade
        cin >> g; // get the grade
        grades.push_back(g); // put the grade at the end of our list
    }

    cout << "Grades: "; // print title
    // look at every single grade in our list
    for (int g : grades) {
        cout << g << " "; // print each grade
    }
    cout << endl; // start a new line

    int count = grades.size(); // find out how many items are in the list
    double sum = 0; // box to add all grades together, starts at 0
    int highest = 0; // box to hold the biggest grade

    // if there is at least one grade
    if (count > 0) {
        highest = grades[0]; // start by guessing the first grade is highest
        // go through all grades to check them
        for (int g : grades) {
            sum += g; // add this grade to the total sum
            // if this grade is bigger than our current highest
            if (g > highest) {
                highest = g; // save it as the new highest grade
            }
        }
    }

    double average = 0.0; // box for the final average
    // if we have grades, calculate the average
    if (count > 0) {
        average = static_cast<double>(sum) / count; // divide total sum by how many grades there are
    }
    // print out all the final answers
    cout << "Count: " << count << endl; // show total number of grades
    cout << "Average: " << average << endl; // show the average score
    cout << "Highest grade: " << highest << endl; // show the biggest grade

    return 0; //  the program ends
}
