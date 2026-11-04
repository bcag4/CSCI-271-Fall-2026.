// Name: Brian J. Caguanaguallpa
// Assignment 7
#include <iostream> // include iostream for cin and cout

using namespace std; // standard namespace shortcut

int main() { // program starts here
    const int SIZE = 8; // fixed size of our array
    int arr[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88}; // sorted list to search through
    
    int target; // number we want to find
    int low = 0; // start of search range
    int high = SIZE - 1; // end of search range
    int foundIndex = -1; // default to -1 meaning not found yet
    
    cout << "Enter a number to search for: "; // ask user for input
    cin >> target; // grab the target number
    
    while (low <= high) { // loop while search space is valid
        int mid = (low + high) / 2; // find the middle index
        
        if (arr[mid] == target) { // did we find it?
            foundIndex = mid; // yup, save the index
            break; // get out of the loop
        }
        else if (arr[mid] < target) {
            low = mid + 1; // target is higher up, shift low bound
        }
        else {
            high = mid - 1; // target is lower down, shift high bound
        }
    }
    
    // print out the final result based on foundIndex
    if (foundIndex != -1) {
        cout << target << " found at index " << foundIndex << endl;
    } else {
        cout << target << " not found" << endl;
    }
    
    return 0; // exit cleanly
}
