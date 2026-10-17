// Program 17: Remove All Vowels from a String Using String Functions
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[50] = "university";
    char result[50];
    int j = 0;

    for (int i = 0; i < (int)strlen(str); i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    cout << "String after removing vowels: " << result << endl;
    return 0;
}
