// Name: Brian Caguana
// Assignment 4
// Program: mult_table.cpp
// Description: Repeatedly prompts the user for a valid menu choice (1, 2, or 3) until valid input is

#include <iostream> // Grabs the input/output toolkit so we can talk to the user

using namespace std; // Saves us from typing std:: everywhere

int main() { // Where the program officially starts running
    int choice; // Creates a box to hold the user's menu pick

    do { // Starts a loop that always runs at least once
        cout << "Enter a menu choice (1, 2, or 3): "; // Asks the user to pick 1, 2, or 3
        cin >> choice; // Waits and grabs whatever number the user types

        if (choice < 1 || choice > 3) { // Checks if the number is out of bounds (not 1, 2, or 3)
            cout << "Invalid choice, try again." << endl; // Warns them if they typed the wrong thing
        }
    } while (choice < 1 || choice > 3); // Keeps looping back if they made a mistake

    cout << "You selected option " << choice << "." << endl; // Prints their final valid choice
    return 0; // Tells the computer everything finished smoothly
}
