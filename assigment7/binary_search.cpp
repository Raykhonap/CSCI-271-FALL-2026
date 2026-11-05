#include <iostream> // lets us use input and outputs
using namespace std; // lets us use cout and cin without typing std

int main() { // where the program starts
    const int SIZE = 8; // total items in our list
    int arr[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88}; // ordered list of numbers
    int target; // the number we want to find

    cout << "Enter a number to search for: "; // ask the user for a number
    cin >> target; // save the number they type

    int low = 0; // start of our search area
    int high = SIZE - 1; // end of our search area
    int foundIndex = -1; // -1 means we haven't found it yet

    while (low <= high) { // keep looking as long as there is space left
        int mid = (low + high) / 2; // find the middle spot

        if (arr[mid] == target) { // did we find our number in the middle?
            foundIndex = mid; // save the spot where we found it
            break; // stop looking, we are done
        }
        else if (arr[mid] < target) { // is the middle number too small?
            low = mid + 1; // look in the right half next
        }
        else { // otherwise, the middle number is too big
            high = mid - 1; // look in the left half next
        }
    }

    if (foundIndex != -1) { // if we found it
        cout << target << " found at index " << foundIndex << endl; // tell the user where it is
    } else { // if we didn't find it
        cout << target << " not found" << endl; // tell the user it's not there
    }

    return 0; // program ends
}
