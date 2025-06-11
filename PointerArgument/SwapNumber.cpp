// PointerSwapAssignment.cpp
#include <iostream>
using namespace std;

// Function to swap values using pointer arguments
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // Taking user input
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    cout << "\nBefore Swap - a: " << a << ", b: " << b << endl;

    // Swapping using pointer arguments
    swap(&a, &b);

    cout << "After Swap  - a: " << a << ", b: " << b << endl;

    return 0;
}
