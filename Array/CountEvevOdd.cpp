#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 6, 7, 9, 10}, even = 0, odd = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "Even: " << even << ", Odd: " << odd << endl;
    return 0;
}
