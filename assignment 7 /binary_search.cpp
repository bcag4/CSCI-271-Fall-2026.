#include <iostream>

using namespace std;

int main() {
    // Set up our fixed size and sorted array
    const int SIZE = 8; 
    int arr[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88};
    
    int target;
    int low = 0;
    int high = SIZE - 1;
    int foundIndex = -1; // Default to -1 so we know if it's missing
    
    // Ask the user what number they are hunting for
    cout << "Enter a number to search for: ";
    cin >> target;
    
    // Keep halving the search space until low crosses high
    while (low <= high) {
    int mid = (low + high) / 2; // Find the exact middle
        
    if (arr[mid] == target) {
        foundIndex = mid;   // Got a match! Save the index
        break;          // Jump out of the loop
    }
    else if (arr[mid] < target) {
    low = mid + 1;  // Target is bigger, throw away the left half
    }
    else {
    high = mid - 1;  // Target is smaller, throw away the right half
    }
    }
    
    // Print whether we found it or not
    if (foundIndex != -1) {
        cout << target << " found at index " << foundIndex << endl;
    } else {
        cout << target << " not found" << endl;
    }
    
    return 0;
}
