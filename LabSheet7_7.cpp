// Program 7: Compare Two Strings Using strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[30] = "Apple";
    char str2[30] = "Banana";
    int result = strcmp(str1, str2);

    if (result == 0)
        cout << "Strings are equal." << endl;
    else
        cout << "Strings are not equal." << endl;
    return 0;
}
