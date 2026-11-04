// Name: Brian J. Caguanaguallpa
// Assignment 7
#include <iostream> // Includes the input/output library for handling text input and console output
#include <vector> // Includes the vector library to allow dynamic sizing of arrays

using namespace std; // Uses the standard namespace for convenient access to cout, cin, and vector

int main() { // Main function entry point for the grade tracker program
    vector<int> grades; // Declares an empty dynamic integer vector named grades
    int numGrades; // Declares an integer variable to store how many grades the user will enter
    
    cout << "How many grades? "; // Prompts the user to specify the quantity of grades
    cin >> numGrades; // Reads the user's specified quantity into numGrades
    
    for (int i = 0; i < numGrades; i++) { // Loops from 0 up to numGrades - 1 to collect each grade safely
        int grade; // Declares a temporary variable to hold the input grade value
        cout << "Enter grade " << (i + 1) << ": "; // Prompts the user for the current grade number
        cin >> grade; // Reads the grade input from the user
        grades.push_back(grade); // Safely appends the new grade to the end of the vector dynamically
    } // Ends the input collection for loop
    
    cout << "Grades: "; // Prints the label prefix for displaying the grade list
    for (int g : grades) { // Uses a safe range-based for loop to iterate through every element in the vector
        cout << g << " "; // Prints each individual grade separated by a space
    } // Ends the display for loop
    cout << endl; // Prints a newline character to format console output neatly
    
    int count = grades.size(); // Stores the total count of elements in the vector
    int sum = 0; // Initializes a running accumulator variable for the total sum of grades to zero
    int highest = grades[0]; // Initializes the highest grade tracker with the first element of the vector
    
    for (int g : grades) { // Range-based for loop to evaluate statistics across all vector elements
        sum += g; // Adds the current grade value to the running total sum
        if (g > highest) { // Checks if the current grade is strictly greater than the current highest
            highest = g; // Updates the highest variable with the newly found maximum grade value
        } // Ends the highest-value check condition
    } // Ends the statistics calculation for loop
    
    double average = static_cast<double>(sum) / count; // Casts the sum to a double to compute an accurate decimal average
    
    cout << "Count: " << count << endl; // Prints the total number of grades entered
    cout << "Average: " << average << endl; // Prints the calculated decimal average of the grades
    cout << "Highest: " << highest << endl; // Prints the highest grade recorded in the vector
    
    return 0; // Signals that the program executed successfully and terminates
} // End of the main function
