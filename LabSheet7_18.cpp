// Program 18: Copy Only First 5 Characters of One String to Another Using strncpy()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[30] = "Programming";
    char destination[10];
    strncpy(destination, source, 5);
    destination[5] = '\0'; // Null-terminate manually
    cout << "Copied 5 characters: " << destination << endl;
    return 0;
}
