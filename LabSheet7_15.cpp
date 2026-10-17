// Program 15: Check if One String is Present in Another Using strstr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[50] = "C++ programming language";
    char word[20] = "programming";

    if (strstr(sentence, word) != nullptr)
        cout << "String is present inside the main string." << endl;
    else
        cout << "String is NOT present." << endl;
    return 0;
}
