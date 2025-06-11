#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";

    cout << "\nReversed Array: ";
    for (int i = size - 1; i >= 0; i--) cout << arr[i] << " ";
    return 0;
}
