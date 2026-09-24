// Q92 (Strings)
// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int count[26] = {0}; // frequency of each lowercase letter a-z
    int i;
    char result = '\0';

    scanf("%[^\n]", str); // reads string including spaces until newline

    // count frequency of each lowercase letter
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }

    // find the first character (left to right) with count > 1
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 1) {
            result = str[i];
            break;
        }
    }

    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("No repeating character\n");
    }

    return 0;
}