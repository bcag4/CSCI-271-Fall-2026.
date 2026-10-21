// Name: Brian Caguana
// Assignment 5 - search_count.cpp
#include <iostream> // Include input/output stream library
using namespace std; // Use standard namespace

int main() { // Main function where execution begins
    const int SIZE = 10; // Define constant size of the array as 10
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; // Initialize fixed array
    int target; // Declare variable to store user's target number
    int foundIndex = -1; // Use sentinel foundIndex = -1 to record first match index
    int count = 0; // Declare and initialize counter to track occurrences

    cout << "Enter a number to search for: "; // Ask user for a target number using cin
    cin >> target; // Read target number from user

    for (int i = 0; i < SIZE; i++) { // Loop through the array to search for target
        if (data[i] == target) { // Check if current element matches target
            count++; // Increment occurrence counter
            if (foundIndex == -1) { // Check if this is the first time the target is found
                foundIndex = i; // Record index of the first match and ensure it only gets set ONCE
            }
        }
    }

    // If found, print the first index and the number of occurrences. If not, print not found
    if (foundIndex != -1) { // Check if target was found
        cout << target << " first found at index " << foundIndex << endl; // Print first index
        cout << target << " appears " << count << " time(s)" << endl; // Print number of occurrences
    } else { // Otherwise, it was not found
        cout << target << " was not found." << endl; // Print not found message
    }

    return 0; // Return 0 to indicate successful execution
}
