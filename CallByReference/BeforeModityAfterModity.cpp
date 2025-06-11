// CallByReference.cpp
#include <iostream>
using namespace std;

// Function to demonstrate call by reference
void modify(int &x) {
    x = x + 10;
    cout << "Inside modify() - Value of x: " << x << endl;
}

int main() {
    int a = 5;
    cout << "Before modify() - Value of a: " << a << endl;
    modify(a);  // Call by reference
    cout << "After modify() - Value of a: " << a << endl;
    return 0;
}
