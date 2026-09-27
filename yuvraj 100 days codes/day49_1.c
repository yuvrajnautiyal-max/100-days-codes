// Q97 (Strings)
// Print the initials of a name

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int i;
    int newWord = 1; // flag: are we at the start of a new word?

    scanf("%[^\n]", str); // reads string including spaces until newline

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            newWord = 1; // next character will start a new word
        } else {
            if (newWord == 1) {
                printf("%c.", str[i]); // print initial followed by a dot
                newWord = 0;
            }
        }
    }
    printf("\n");

    return 0;
}