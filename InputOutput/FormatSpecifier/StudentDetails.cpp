// FormatSpecifier.cpp
#include <iostream>
#include <iomanip> // Required for formatting functions
using namespace std;

int main() {
    // Variables for user input
    string name;
    int age;
    float marks;

    // Input from user
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    // Formatted output using format specifiers
    cout << "\n--- Formatted Student Details ---\n";
    cout << left << setw(15) << "Name"
         << setw(10) << "Age"
         << setw(10) << "Marks" << endl;

    cout << left << setw(15) << name
         << setw(10) << age
         << fixed << setprecision(2) << marks << endl;

    return 0;
}
