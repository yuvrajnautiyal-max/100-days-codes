/*
 * Question 120 (File Handling / Logic Enhancers)
 * 
 * Write a program to take a string input. Change it to sentence case.
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[10005];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    int len = strlen(s);
    
      if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

       int capitalize_next = 1;

    for (int i = 0; i < len; i++) {
        char ch = s[i];

        if (isalpha(ch)) {
            if (capitalize_next) {
                // Capitalize the first letter of the sentence
                s[i] = toupper(ch);
                capitalize_next = 0; // Turn off the flag until we hit another sentence end
            } else {
                // All other letters inside the sentence must be in lowercase
                s[i] = tolower(ch);
            }
        } 
        // Check for sentence-ending punctuation marks
        else if (ch == '.' || ch == '?' || ch == '!') {
            capitalize_next = 1; // The next alphabetic character must be capitalized
        }
    }
    printf("%s\n", s);

    return 0;
}
