#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int key, found = 0;

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = 1;
            break;
        }
    }

    if (!found) cout << "Element not found." << endl;
    return 0;
}
