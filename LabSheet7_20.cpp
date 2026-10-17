// Program 20: Check Whether Two Strings Are Anagrams Using String Functions
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char str1[30] = "silent";
    char str2[30] = "listen";

    if (strlen(str1) != strlen(str2)) {
        cout << "Not Anagrams" << endl;
        return 0;
    }

    sort(str1, str1 + strlen(str1));
    sort(str2, str2 + strlen(str2));

    if (strcmp(str1, str2) == 0)
        cout << "Strings are Anagrams." << endl;
    else
        cout << "Strings are NOT Anagrams." << endl;
    return 0;
}
