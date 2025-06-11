#include <iostream>
using namespace std;

int main() {
    // Declare variables
    string name;
    int age;
    float marks;

    // Input from the user
    cout << "Enter your name: ";
    getline(cin, name); // to read full name

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    // Output the result
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}
