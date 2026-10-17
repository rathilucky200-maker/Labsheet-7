// Program 3: Copy One String to Another Using strcpy()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[30] = "BCA First Semester";
    char destination[30];
    strcpy(destination, source);
    cout << "Copied string = " << destination << endl;
    return 0;
}
