// Q83 (Strings)
// Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int i, vowels = 0, consonants = 0;
    char ch;

    scanf("%[^\n]", str); // reads string including spaces until newline

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        // convert uppercase to lowercase for uniform checking
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}