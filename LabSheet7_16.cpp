// Program 16: Count the Number of Words in a String Using strlen() and Spaces
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100] = "C++ is an object oriented language";
    int words = 1; // At least one word if string is non-empty

    for (int i = 0; i < (int)strlen(str); i++) {
        if (str[i] == ' ') {
            words++;
        }
    }

    cout << "Total words = " << words << endl;
    return 0;
}
