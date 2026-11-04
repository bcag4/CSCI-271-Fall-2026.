// Name: Brian J. Caguanaguallpa
// Assignment 7
#include <iostream> // Includes the input/output stream library for console input and output

using namespace std; // Allows usage of standard library components without the std:: prefix

int main() { // Main function where program execution starts
    const int SIZE = 8; // Declares a constant integer representing the fixed size of the array
    int arr[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88}; // Initializes a sorted array of 8 integers safely within bounds (0 to SIZE - 1)
    
    int target; // Declares a variable to store the number the user wants to search for
    int low = 0; // Initializes the lower bound index of the search space to 0
    int high = SIZE - 1; // Initializes the upper bound index to SIZE - 1 (index 7)
    int foundIndex = -1; // Initializes foundIndex to -1 to flag if the target hasn't been found yet
    
    cout << "Enter a number to search for: "; // Prompts the user to input a target number
    cin >> target; // Reads the user's input into the target variable
    
    while (low <= high) { // Loops as long as the search range is valid and lower index doesn't exceed upper index
        int mid = (low + high) / 2; // Calculates the middle index of the current active search range
        
        if (arr[mid] == target) { // Checks if the element at the middle index matches the target
            foundIndex = mid; // Saves the current middle index as the found location
            break; // Exits the while loop immediately since the target is found
        }
        else if (arr[mid] < target) { // Checks if the middle element is smaller than the target
            low = mid + 1; // Narrows the search range to the upper half by shifting the low boundary up
        }
        else { // Executes if the middle element is greater than the target
            high = mid - 1; // Narrows the search range to the lower half by shifting the high boundary down
        } // Ends the conditional checking block
    } // Ends the binary search while loop
    
    if (foundIndex != -1) { // Checks if foundIndex was updated from -1 (meaning the target was found)
        cout << target << " found at index " << foundIndex << endl; // Prints success message with the index
    } else { // Executes if foundIndex is still -1 (meaning the target was not in the array)
        cout << target << " not found" << endl; // Prints failure message indicating the number is missing
    } // Ends the result display conditional block
    
    return 0; // Returns 0 to signal successful program completion
} // End of the main function
