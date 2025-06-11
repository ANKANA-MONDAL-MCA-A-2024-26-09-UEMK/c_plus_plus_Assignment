#include <iostream>
using namespace std;

void findAverage(int* arr, int size, float* avg) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *(arr + i);
    }
    *avg = static_cast<float>(sum) / size;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    float avg;
    findAverage(arr, 5, &avg);
    cout << "Average: " << avg << endl;
    return 0;
}
