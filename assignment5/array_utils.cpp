// Name: Brian Caguana
// Assignment 5 - array_utils.cpp

#include <iostream> // Grabs the input/output tools so we can print and chat with the user
using namespace std; // A nice shortcut so we don't have to keep typing std:: over and over

// A function to print out all the numbers in our list in normal order
void printForward(const int arr[], int size) {
    cout << "Forward: "; // Print a nice label for our list
    for (int i = 0; i < size; i++) { // Loop smoothly from the first item all the way to the end
        cout << arr[i] << " "; // Print each number with a space after it
    }
    cout << endl; // Drop down to a fresh line when we're done
}

// A function to print out the exact same numbers, but backwards from last to first
void printReverse(const int arr[], int size) {
    cout << "Reverse: "; // Print a label for the backwards list
    for (int i = size - 1; i >= 0; i--) { // Start at the very last index and count backwards down to 0
        cout << arr[i] << " "; // Print each number as we go backward
    }
    cout << endl; // Drop down to a fresh line when we're done
}

// A function that counts how many numbers in our list are bigger than a given limit
int countAbove(const int arr[], int size, int limit) {
    int count = 0; // Setting up a little counter box starting at zero
    for (int i = 0; i < size; i++) { // Look through every single number in the list one by one
        if (arr[i] > limit) { // If the current number is bigger than our limit...
            count++; // ...bump our counter up by one!
        }
    }
    return count; // Hand back the final total count
}

int main() { // Alright, this is where our program officially kicks off
    const int SIZE = 6; // Lock in the size of our list as 6 items
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // Fill up our array box with these numbers
    int limit; // Create a spot to store whatever limit number the user picks

    printForward(values, SIZE); // Call our function to show the list normally
    printReverse(values, SIZE); // Call our function to show the list backwards

    cout << "Count values above: "; // Ask the user what number limit they want to check against
    cin >> limit; // Grab and save whatever number they type in

    int result = countAbove(values, SIZE, limit); // Run our counting function and save the answer
    cout << "Count: " << result << endl; // Print out the final count result for the user

    return 0; // Tell the system everything went smoothly with zero errors
}
