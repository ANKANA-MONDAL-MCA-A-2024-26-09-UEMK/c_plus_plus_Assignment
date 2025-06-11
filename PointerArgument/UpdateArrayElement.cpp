#include <iostream>
using namespace std;

void doubleArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        *(arr + i) *= 2;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    doubleArray(arr, size);
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}
