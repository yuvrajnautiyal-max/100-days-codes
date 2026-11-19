/*
 * Question 146 (Enum / Structs)
 * 
 * Create Employee structure with nested Date structure for joining date and print details.
 */

#include <stdio.h>

// 1. Define an enum for Job Roles
enum JobRole {
    SOFTWARE_ENGINEER,
    DATA_ANALYST,
    PRODUCT_MANAGER,
    UX_DESIGNER
};

// 2. Define the nested structure for Dates
struct Date {
    int day;
    int month;
    int year;
};

// 3. Define the main Employee structure containing the nested Date structure
struct Employee {
    int id;
    char name[50];
    float salary;
    enum JobRole role;
    struct Date joining_date; // NESTED STRUCTURE MEMBER
};

// Function declarations
void printEmployee(const struct Employee *emp);

int main() {
    printf("--- Employee Record Administration ---\n\n");

    // 4. Initialize an Employee record containing nested Date details
    struct Employee emp1 = {
        35359,
        "Yuvraj Singh",
        98500.50,
        SOFTWARE_ENGINEER,
        {19, 11, 2026} // Nested initialization: {day, month, year}
    };

    // Print the record using our pointer-based print function
    printEmployee(&emp1);

    return 0;
}

// 5. Function to print Employee details using a structure pointer
void printEmployee(const struct Employee *emp) {
    printf("=========================================\n");
    printf("📋 EMPLOYEE DOSSIER\n");
    printf("=========================================\n");
    printf("Employee ID:   %d\n", emp->id);
    printf("Name:          %s\n", emp->name);
    printf("Base Salary:   $%.2f\n", emp->salary);
    
    // Map the enum value to its corresponding string representation
    printf("Job Role:      ");
    switch (emp->role) {
        case SOFTWARE_ENGINEER: printf("Software Engineer\n"); break;
        case DATA_ANALYST:     printf("Data Analyst\n");      break;
        case PRODUCT_MANAGER:  printf("Product Manager\n");   break;
        case UX_DESIGNER:     printf("UX Designer\n");       break;
        default:               printf("Unknown\n");
    }

    // Access nested Date members using both pointer (->) and dot (.) operators
    // Using formatting to prepend leading zeros for single digit days/months (e.g. 05/09/2026)
    printf("Joining Date:  %02d/%02d/%04d\n", 
           emp->joining_date.day, 
           emp->joining_date.month, 
           emp->joining_date.year);
    printf("=========================================\n");
}
