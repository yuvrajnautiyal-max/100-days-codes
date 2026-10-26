#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 256

int main(void) {
    char srcName[MAX_NAME], destName[MAX_NAME];
    FILE *src, *dest;
    int ch;
    long copied = 0;

    printf("Enter source filename: ");
    if (scanf("%255s", srcName) != 1) {
        fprintf(stderr, "Invalid input for source filename.\n");
        return EXIT_FAILURE;
    }

    printf("Enter destination filename: ");
    if (scanf("%255s", destName) != 1) {
        fprintf(stderr, "Invalid input for destination filename.\n");
        return EXIT_FAILURE;
    }

    // Open source for reading (binary mode keeps bytes unchanged)
    src = fopen(srcName, "rb");
    if (src == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    // Open destination for writing (creates it, or overwrites if it exists)
    dest = fopen(destName, "wb");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return EXIT_FAILURE;
    }

    // Copy one