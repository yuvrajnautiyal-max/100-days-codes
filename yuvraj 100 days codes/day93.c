/*
 * Question 143 (Enum / Structs)
 * 
 * Find and print the student with the highest marks.
 */

#include <stdio.h>

// 1. Define an enum to represent the student's status
enum Status {
    FAIL,
    PASS
};

// 2. Define the Student struct including our enum
struct Student {
    char name[50];
    int roll_number;
    float marks;
    enum Status pass_status; // Enum member
};

int main() {
    int n;

    printf("--- Highest Marks Finder ---\n");
    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    struct Student students[n];

    // 3. Read details for all students
    for (int i = 0; i < n; i++) {
        printf("\n--- Entering Details for Student %d ---\n", i + 1);
        
        printf("Enter Name (use underscores instead of spaces): ");
        scanf("%49s", students[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        // Assign enum status based on a passing threshold of 40 marks
        if (students[i].marks >= 40.0) {
            students[i].pass_status = PASS;
        } else {
            students[i].pass_status = FAIL;
        }
    }

    // 4. Initialize tracking variable to find the highest marks.
    // Assume the first student has the highest marks initially.
    int highest_index = 0;

    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[highest_index].marks) {
            highest_index = i; // Record the index of the new topper
        }
    }

    // 5. Display the student with the highest marks
    printf("\n=====================================\n");
    printf("⭐ STUDENT WITH THE HIGHEST MARKS ⭐\n");
    printf("=====================================\n");
    printf("Name:        %s\n", students[highest_index].name);
    printf("Roll Number: %d\n", students[highest_index].roll_number);
    printf("Marks:       %.2f\n", students[highest_index].marks);
    printf("Status:      %s\n", (students[highest_index].pass_status == PASS) ? "PASS" : "FAIL");
    printf("=====================================\n");

    return 0;
}
