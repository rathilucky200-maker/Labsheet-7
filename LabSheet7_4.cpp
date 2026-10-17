// Program 4: Input Two Strings and Check if Equal Using strcpy() and Comparison
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[30], str2[30];
    cout << "Enter first string: ";
    cin >> str1;

    // Copying str1 to str2 using strcpy()
    strcpy(str2, str1);

    cout << "String 1: " << str1 << endl;
    cout << "String 2 (copied via strcpy): " << str2 << endl;
    cout << "Both strings are identical." << endl;
    return 0;
}
