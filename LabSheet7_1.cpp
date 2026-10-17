// Program 1: Input a String and Find its Length Using strlen()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[50];
    cout << "Enter a string: ";
    cin >> str;
    cout << "Length of string = " << strlen(str) << endl;
    return 0;
}
