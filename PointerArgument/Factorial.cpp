#include <iostream>
using namespace std;

void factorial(int n, int* result) {
    *result = 1;
    for (int i = 1; i <= n; ++i)
        *result *= i;
}

int main() {
    int n = 5, fact;
    factorial(n, &fact);
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}
