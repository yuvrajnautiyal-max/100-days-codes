// Q98 (Strings)
// Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    char words[100][100]; // to store each word separately
    int wordCount = 0, i, j, k;

    scanf("%[^\n]", str); // reads string including spaces until newline

    // split the string into words
    j = 0;
    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            words[wordCount][j] = '\0'; // terminate current word
            wordCount++;
            j = 0;

            if (str[i] == '\0') {
                break; // reached end of string
            }
        } else {
            words[wordCount][j] = str[i];
            j++;
        }
    }

    // print initials for all words except the last one
    for (i = 0; i < wordCount - 1; i++) {
        printf("%c.", words[i][0]);
    }

    // print the last word (surname) in full
    printf("%s\n", words[wordCount - 1]);

    return 0;
}