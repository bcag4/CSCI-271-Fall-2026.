// [Brian Caguana]
// Assignment: Assignment 3
// Description: Temperature Classifier program

#include <iostream> // Include standard I/O stream library

using namespace std;

int main() { // Main program function
    int temp; // Variable to store input temperature

    cout << "Enter the temperature (F): "; // Prompt user for temperature
    cin >> temp; // Read integer temperature input

    if (temp < 32) { // Check if temperature is below 32
        cout << "That's Freezing." << endl; // Output classification for < 32
    } else if (temp <= 59) { // Check if temperature is between 32 and 59
        cout << "That's Cold." << endl; // Output classification for 32-59
    } else if (temp <= 75) { // Check if temperature is between 60 and 75
        cout << "That's Mild." << endl; // Output classification for 60-75
    } else { // Handles temperatures 76 and above
        cout << "That's Hot." << endl; // Output classification for >= 76
    } // End of conditional structure

    return 0; // Return 0 to indicate successful execution
}
