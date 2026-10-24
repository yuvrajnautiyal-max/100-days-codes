#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 256

int main(void) {
    FILE *fp;
    char line[MAX_LINE];

    // Open the file in read mode
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // fgets() returns NULL when EOF is reached (or on error)
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return EXIT_SUCCESS;
}