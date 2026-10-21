#include <iostream>
using namespace std;

int main() {
    // Setting up variables to hold the user's name and age
    string name;
    int age;

    // Ask for their name and grab what they type
    cout << "Enter your name: ";
    cin >> name;

    // Ask for their age and grab that too
    cout << "Enter your age: ";
    cin >> age;

    // Put everything together into a nice little greeting
    cout << "Hello, I am " << name << "! I am " << age << " years old." << endl;

    // Tell the system everything ran smoothly and wrap it up
    return 0;
}
