// Program 5: Concatenate Two Strings Using strcat()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstName[30] = "Hello ";
    char lastName[30] = "World";
    strcat(firstName, lastName);
    cout << "Concatenated string: " << firstName << endl;
    return 0;
}
