// [Brian Caguana] - Assignment 3
// Program to check discount eligibility based on age and membership

#include <iostream> // Grabs the input/output toolkit

using namespace std; // Saves us from typing std:: everywhere

int main() { // Where the program officially starts running
    int age; // Box to store the user's age
    int isMember; // Box to check membership (1 = yes, 0 = no)

    cout << "Enter your age: "; // Asks the user for their age
    cin >> age; // Grabs and saves the age they type

    cout << "Are you a member? (1 = yes, 0 = no): "; // Asks if they are a member
    cin >> isMember; // Grabs their membership choice

    // Checks if they are 60+ OR if they are 18+ and a member
    if (age >= 60 || (age >= 18 && isMember == 1)) { 
        cout << "You qualify for the discount." << endl; // Prints the good news if they qualify
    } else { // Otherwise, if they don't meet the rules
        cout << "You do not qualify for the discount." << endl; // Prints that they don't qualify
    }

    return 0; // Tells the computer everything went smoothly
} // Closes out the main program
