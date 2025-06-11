#include <iostream>
using namespace std;

void sumAndDiff(int a, int b, int* sum, int* diff) {
    *sum = a + b;
    *diff = a - b;
}

int main() {
    int a = 10, b = 5, sum, diff;
    sumAndDiff(a, b, &sum, &diff);
    cout << "Sum: " << sum << ", Difference: " << diff << endl;
    return 0;
}
