/*
 * Question 129 (File Handling)
 * 
 * A file numbers.txt contains a list of integers separated by spaces. 
 * Read all integers, compute their sum and average, and print both.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    int num;
    long long sum = 0;
    int count = 0;

    // 1. Open the file in read mode
    file_ptr = fopen("numbers.txt", "r");
    if (file_ptr == NULL) {
        printf("Error: Could not open 'numbers.txt'. Please check if the file exists.\n");
        return 1;
    }

    // 2. Read integers sequentially until EOF
    while (fscanf(file_ptr, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // 3. Close the file resource
    fclose(file_ptr);

    // 4. Output the results
    if (count == 0) {
        printf("The file 'numbers.txt' contains no integers.\n");
    } else {
        double average = (double)sum / count;
        printf("Total Integers Read: %d\n", count);
        printf("Sum:                 %lld\n", sum);
        printf("Average:             %.2f\n", average);
    }

    return 0;
}
