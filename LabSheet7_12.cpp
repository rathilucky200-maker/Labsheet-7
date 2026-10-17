// Program 12: Find the First Occurrence of a Character in a String Using strchr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[30] = "programming";
    char ch = 'g';
    char* ptr = strchr(str, ch);

    if (ptr != nullptr)
        cout << "First occurrence of '" << ch << "' is at index: " << (ptr - str) << endl;
    else
        cout << "Character not found." << endl;
    return 0;
}
