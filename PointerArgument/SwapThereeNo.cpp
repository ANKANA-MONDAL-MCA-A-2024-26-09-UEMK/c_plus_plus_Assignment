#include <iostream>
using namespace std;

void circularSwap(int* a, int* b, int* c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int a = 1, b = 2, c = 3;
    circularSwap(&a, &b, &c);
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    return 0;
}
