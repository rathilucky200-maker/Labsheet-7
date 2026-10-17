// Program 8: Check if Two Strings Are Equal (Case-Sensitive) Using strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[30] = "COER";
    char str2[30] = "coer";

    if (strcmp(str1, str2) == 0)
        cout << "Strings are equal (case-sensitive)." << endl;
    else
        cout << "Strings are NOT equal (case-sensitive)." << endl;
    return 0;
}
