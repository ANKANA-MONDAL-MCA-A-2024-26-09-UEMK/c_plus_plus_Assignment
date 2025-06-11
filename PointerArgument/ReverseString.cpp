#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) {
    int len = strlen(str);
    char* start = str;
    char* end = str + len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }
}

int main() {
    char str[] = "Pointer";
    reverseString(str);
    cout << "Reversed: " << str << endl;
    return 0;
}
