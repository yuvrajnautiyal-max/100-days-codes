// Q93 (Strings)
// Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[1000], str2[1000]; // assuming max size 1000
    int count[26] = {0}; // frequency of each lowercase letter a-z
    int i;
    char ch;
    int isAnagram = 1;

    scanf("%[^\n]", str1);
    getchar(); // consume leftover newline
    scanf("%[^\n]", str2);

    // count letters in str1 (add)
    for (i = 0; str1[i] != '\0'; i++) {
        ch = str1[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; // convert to lowercase
        }
        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++;
        }
    }

    // count letters in str2 (subtract)
    for (i = 0; str2[i] != '\0'; i++) {
        ch = str2[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; // convert to lowercase
        }
        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']--;
        }
    }

    // if strings are anagrams, all counts should be back to 0
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram == 1) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}