// Program 13: Find the Last Occurrence of a Character in a String Using strrchr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[30] = "programming";
    char ch = 'g';
    char* ptr = strrchr(str, ch);

    if (ptr != nullptr)
        cout << "Last occurrence of '" << ch << "' is at index: " << (ptr - str) << endl;
    else
        cout << "Character not found." << endl;
    return 0;
}
