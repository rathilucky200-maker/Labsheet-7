// Program 19: Join Multiple Strings Into One Sentence Using strcat()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[100] = "We ";
    char part1[] = "love ";
    char part2[] = "coding ";
    char part3[] = "in C++";

    strcat(sentence, part1);
    strcat(sentence, part2);
    strcat(sentence, part3);

    cout << "Joined Sentence: " << sentence << endl;
    return 0;
}
