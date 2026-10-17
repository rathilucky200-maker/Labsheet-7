// Program 6: Join First Name and Last Name Using strcat()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstName[30] = "Vansh ";
    char lastName[30] = "Kumar";
    strcat(firstName, lastName);
    cout << "Full Name: " << firstName << endl;
    return 0;
}
