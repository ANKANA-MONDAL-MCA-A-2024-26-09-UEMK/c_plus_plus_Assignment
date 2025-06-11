#include <iostream>
using namespace std;

void maxMin(int a, int b, int* max, int* min) {
    if (a > b) {
        *max = a;
        *min = b;
    } else {
        *max = b;
        *min = a;
    }
}

int main() {
    int a = 3, b = 8, max, min;
    maxMin(a, b, &max, &min);
    cout << "Max: " << max << ", Min: " << min << endl;
    return 0;
}
