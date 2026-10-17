// Q115 (Logic Enhancers)
// Take two strings s and t (all lowercase) and determine if they are
// valid anagrams, i.e. same characters with the same frequencies.
// Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>

int main() {
    char s[1000], t[1000]; // assuming max size 1000
    int count[26] = {0};   // frequency of each lowercase letter a-z
    int i, isAnagram = 1;

    scanf("%s", s);
    scanf("%s", t);

    // add 1 for each letter in s
    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // subtract 1 for each letter in t
    for (i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    // if they are anagrams, every count returns to 0
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