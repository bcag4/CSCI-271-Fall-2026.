// [Brian Caguana]
// Assignment: Assignment 3
// Description: Even or Odd Number Checker program
#include <iostream> // Grabs the input/output toolkit

using namespace std; // Saves us from typing std:: everywhere

int main() { // Where the program starts running
    int number; // Creates a box to hold the user's number
    
    cout << "Enter an integer: "; // Asks the user for a number
    cin >> number; // Waits and grabs the number they type

    if (number % 2 == 0) { // Checks if it divides evenly by 2
        cout << number << " is even." << endl; // Prints if it's even
    } else { // Otherwise, it's not even, so it's odd!
        cout << number << " is odd." << endl; // Prints if it's odd
    }

    return 0; // Tells the computer everything went great
}
