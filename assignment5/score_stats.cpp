// Name: Brian Caguana
// Assignment 5 - score_stats.cpp
#include <iostream> // Include input/output stream library
using namespace std; // Use standard namespace

int main() { // Main function where execution begins
    const int SIZE = 5; // Define constant size of the array as 5
    int scores[SIZE]; // Declare an integer array of size 5
    int sum = 0; // Initialize sum variable to 0
    double average = 0.0; // Initialize average variable to 0.0
    int highest; // Declare variable to store the highest score
    int lowest; // Declare variable to store the lowest score

    // Use a for loop to read the 5 scores from the user with cin
    for (int i = 0; i < SIZE; i++) { // Loop from index 0 to SIZE - 1
        cout << "Enter score " << (i + 1) << ": "; // Prompt user for score
        cin >> scores[i]; // Read score into array element
    }

    highest = scores[0]; // Start max from the first element
    lowest = scores[0]; // Start min from the first element
    sum = scores[0]; // Initialize sum with the first element

    for (int i = 1; i < SIZE; i++) { // Loop through the rest of the array
        sum += scores[i]; // Add current score to sum
        if (scores[i] > highest) { // Check if current score is greater than highest
            highest = scores[i]; // Update highest score
        }
        if (scores[i] < lowest) { // Check if current score is less than lowest
            lowest = scores[i]; // Update lowest score
        }
    }

    // Compute the average as a double — use static_cast so the decimal part isn't lost
    average = static_cast<double>(sum) / SIZE; // Calculate average

    // Print all the scores on one line
    cout << "Scores: "; // Print label for scores
    for (int i = 0; i < SIZE; i++) { // Loop through all scores
        cout << scores[i] << " "; // Print each score followed by a space
    }
    cout << endl; // Print newline

    // Print the sum, average, highest, and lowest, each clearly labeled
    cout << "Sum: " << sum << endl; // Print sum
    cout << "Average: " << average << endl; // Print average
    cout << "Highest: " << highest << endl; // Print highest score
    cout << "Lowest: " << lowest << endl; // Print lowest score

    return 0; // Return 0 to indicate successful execution
}
