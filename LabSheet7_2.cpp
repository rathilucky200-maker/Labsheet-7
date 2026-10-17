// Program 2: Count the Number of Vowels in a String Using strlen()
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[50];
    int vowels = 0;
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < (int)strlen(str); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    cout << "Number of vowels = " << vowels << endl;
    return 0;
}
