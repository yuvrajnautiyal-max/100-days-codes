// Q94 (Strings)
// Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    char longest[1000]; // to store the longest word found
    char current[1000];  // to store the current word being built
    int i, j = 0, k = 0;
    int maxLen = 0, currentLen = 0;

    scanf("%[^\n]", str); // reads string including spaces until newline

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            current[j] = '\0'; // terminate current word
            currentLen = j;

            if (currentLen > maxLen) {
                maxLen = currentLen;
                // copy current word into longest
                for (k = 0; k <= currentLen; k++) {
                    longest[k] = current[k];
                }
            }

            j = 0; // reset for next word

            if (str[i] == '\0') {
                break; // reached end of string
            }
        } else {
            current[j] = str[i];
            j++;
        }
    }

    printf("%s\n", longest);

    return 0;
}