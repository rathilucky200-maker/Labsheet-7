// Program 14: Find a Substring Inside Another String Using strstr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mainStr[50] = "Welcome to COER University";
    char subStr[20] = "COER";
    char* ptr = strstr(mainStr, subStr);

    if (ptr != nullptr)
        cout << "Substring found: " << ptr << endl;
    else
        cout << "Substring not found." << endl;
    return 0;
}
