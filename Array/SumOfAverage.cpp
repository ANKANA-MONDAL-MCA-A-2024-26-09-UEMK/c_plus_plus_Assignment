#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}, sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++) sum += arr[i];

    float average = (float)sum / size;
    cout << "Sum: " << sum << ", Average: " << average << endl;
    return 0;
}
