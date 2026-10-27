#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 256

int main(void) {
    FILE *fp;
    char text[MAX_LINE];

    // Open in append mode: writes always go to the end of the file
    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    printf("Enter a line of text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        fprintf(stderr, "No input received.\n");
        fclose(fp);
        return EXIT_FAILURE;
    }

    // Remove the trailing newline (if any) so we control the line ending
    text[strcspn(text, "\n")] = '\0';

    // Write the text followed by a newline
    if (fprintf(fp, "%s\n", text) < 0) {
        perror("Error writing to file");
        fclose(fp);
        return EXIT_FAILURE;
    }

    fclose(fp);

    printf("Text appended successfully.\n");
    return EXIT_SUCCESS;
}