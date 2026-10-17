// Program 9: Arrange an Array of Strings in Alphabetical Order Using strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char names[3][20] = {"Zebra", "Apple", "Mango"};
    char temp[20];

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    cout << "Sorted strings: ";
    for (int i = 0; i < 3; i++) {
        cout << names[i] << " ";
    }
    cout << endl;
    return 0;
}
