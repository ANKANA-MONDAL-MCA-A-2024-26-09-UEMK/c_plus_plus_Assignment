#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
