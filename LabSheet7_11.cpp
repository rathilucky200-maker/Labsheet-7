// Program 11: Check if a String is Palindrome Using strrev()
// Note: strrev() is a non-standard function available only on Turbo C++ / MSVC.
// It is not part of <cstring> on GCC/Linux, so a portable version is provided
// below with the same name and behavior, and is used exactly like strrev().
#include <iostream>
#include <cstring>
using namespace std;

char* strrev(char* str) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    return str;
}

int main() {
    char str[30] = "madam";
    char revStr[30];
    strcpy(revStr, str);
    strrev(revStr);

    if (strcmp(str, revStr) == 0)
        cout << "String is a palindrome." << endl;
    else
        cout << "String is not a palindrome." << endl;
    return 0;
}
