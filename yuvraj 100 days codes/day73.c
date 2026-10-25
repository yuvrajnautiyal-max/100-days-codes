#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    FILE *fp;
    int ch;
    long chars = 0, words = 0, lines = 0;
    int inWord = 0;      // 1 while we are inside a word
    int lastChar = '\n'; // tracks the final character read

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        lastChar = ch;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;          // whitespace ends a word
        } else if (!inWord) {
            inWord = 1;          // first non-space char starts a new word
            words++;
        }
    }

    // If the file doesn't end with '\n', the last line is still a line
    if (lastChar != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %ld\n", chars);
    printf("Words     : %ld\n", words);
    printf("Lines     : %ld\n", lines);

    return EXIT_SUCCESS;
}