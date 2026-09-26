// Q95 (Strings)
// Check if one string is a rotation of another.

#include <stdio.h>

int main() {
    char str1[1000], str2[1000]; // assuming max size 1000
    char temp[2000]; // to hold str1 concatenated with itself
    int len1 = 0, len2 = 0, i, j, k, matched;

    scanf("%[^\n]", str1);
    getchar(); // consume leftover newline
    scanf("%[^\n]", str2);

    // find length of str1
    while (str1[len1] != '\0') {
        len1++;
    }

    // find length of str2
    while (str2[len2] != '\0') {
        len2++;
    }

    if (len1 != len2) {
        printf("Not Rotation\n");
        return 0;
    }

    // build temp = str1 + str1
    for (i = 0; i < len1; i++) {
        temp[i] = str1[i];
    }
    for (i = 0; i < len1; i++) {
        temp[len1 + i] = str1[i];
    }
    temp[2 * len1] = '\0';

    // check if str2 is a substring of temp
    for (i = 0; i <= (2 * len1 - len2); i++) {
        matched = 1;
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j]) {
                matched = 0;
                break;
            }
        }
        if (matched == 1) {
            printf("Rotation\n");
            return 0;
        }
    }

    printf("Not Rotation\n");

    return 0;
}