/*
 * Question 130 (File Handling)
 * 
 * Store multiple student records (name, roll number, marks) into a file 
 * using fprintf(). Then read them using fscanf() and display each record.
 */

#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student records temporarily in memory
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    FILE *file_ptr;
    int n;

    // ==========================================
    // PHASE 1: WRITING RECORDS TO THE FILE
    // ==========================================
    
    // Open the file in write mode ("w")
    file_ptr = fopen("students.txt", "w");
    if (file_ptr == NULL) {
        printf("Error: Could not open students.txt for writing.\n");
        return 1;
    }

    printf("Enter the number of student records to store: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        fclose(file_ptr);
        return 1;
    }

    struct Student temp_student;

    for (int i = 0; i < n; i++) {
        printf("\n--- Entering Details for Student %d ---\n", i + 1);
        
        printf("Enter Name (use underscores instead of spaces, e.g., Shaurya_Ramola): ");
        scanf("%49s", temp_student.name);

        printf("Enter Roll Number: ");
        scanf("%d", &temp_student.roll_number);

        printf("Enter Marks: ");
        scanf("%f", &temp_student.marks);

        // Write formatted records to the file.
        // We use spaces as delimiters so fscanf can parse them easily later.
        fprintf(file_ptr, "%s %d %.2f\n", temp_student.name, temp_student.roll_number, temp_student.marks);
    }

    // Close file after writing is finished
    fclose(file_ptr);
    printf("\nSuccessfully stored %d records in 'students.txt'.\n", n);


    // ==========================================
    // PHASE 2: READING RECORDS FROM THE FILE
    // ==========================================

    // Reopen the file in read mode ("r")
    file_ptr = fopen("students.txt", "r");
    if (file_ptr == NULL) {
        printf("Error: Could not open students.txt for reading.\n");
        return 1;
    }

    printf("\n--- Reading and Displaying Records from File ---\n");
    printf("%-20s %-15s %-10s\n", "Name", "Roll Number", "Marks");
    printf("--------------------------------------------------\n");

    // Read records line-by-line using fscanf. 
    // fscanf returns 3 as long as it successfully matches all three variables in a line.
    while (fscanf(file_ptr, "%s %d %f", temp_student.name, &temp_student.roll_number, &temp_student.marks) == 3) {
        // Render the fetched records neatly onto the terminal screen
        printf("%-20s %-15d %-10.2f\n", temp_student.name, temp_student.roll_number, temp_student.marks);
    }

    // Always close the file pointer after you are done!
    fclose(file_ptr);

    return 0;
}
