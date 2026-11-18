/*
 * Question 146 (Enum / Structs)
 * 
 * Create Employee structure with nested Date structure for joining date and print details.
 */

#include <stdio.h>

// 1. Define an enum for Employee Designation/Role
enum Role {
    DEVELOPER,
    DESIGNER,
    MANAGER,
    ANALYST
};

// 2. Define the nested Date structure first
struct Date {
    int day;
    int month;
    int year;
};

// 3. Define the parent Employee structure containing the nested Date structure
struct Employee {
    int id;
    char name[50];
    float salary;
    enum Role role;
    struct Date joining_date; // NESTED STRUCTURE MEMBER
};

// Function prototype to print details using pointer (industry-standard practice)
void printEmployeeDetails(const struct Employee *emp);

int main() {
    printf("--- Nested Structure Directory Record ---\n\n");

    // 4. Initialize an Employee record with nested structure values.
    // Notice the nested curly braces {15, 8, 2024} used for initialize the Date struct.
    struct Employee emp1 = {
        1001,
        "Shaurya Ramola",
        85000.75,
        DEVELOPER,
        {15, 8, 2024} // Nested initialization: Day, Month, Year
    };

    // Print details of the employee
    printEmployeeDetails(&emp1);

    return 0;
}

// 5. Function to print the details using the Arrow (->) and Dot (.) operators
void printEmployeeDetails(const struct Employee *emp) {
    printf("=========================================\n");
    printf("💳 EMPLOYEE INFORMATION CARD\n");
    printf("=========================================\n");
    printf("ID:            %d\n", emp->id);
    printf("Name:          %s\n", emp->name);
    printf("Salary:        $%.2f\n", emp->salary);
    
    // Convert Role Enum to String
    printf("Designation:   ");
    switch (emp->role) {
        case DEVELOPER: printf("Developer\n"); break;
        case DESIGNER:  printf("Designer\n");  break;
        case MANAGER:   printf("Manager\n");   break;
        case ANALYST:   printf("Analyst\n");   break;
    }

    // Access nested member values.
    // We use -> to get past the pointer and . to access members inside the nested struct.
    printf("Joining Date:  %02d/%02d/%d (DD/MM/YYYY)\n", 
           emp->joining_date.day, 
           emp->joining_date.month, 
           emp->joining_date.year);
    printf("=========================================\n");
}
