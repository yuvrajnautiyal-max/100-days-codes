/*
 * Question 140 (Enum)
 * 
 * Define a struct with enum Gender and print person's gender.
 */

#include <stdio.h>

// 1. Define the enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// 2. Define the struct representing a Person, including the enum Gender as a member
struct Person {
    char name[50];
    int age;
    enum Gender gender; // Enum member inside the struct
};

int main() {
    // 3. Initialize person records with different gender enum values
    struct Person p1 = {"Shaurya Ramola", 19, MALE};
    struct Person p2 = {"Niya Sen", 20, FEMALE};

    printf("--- Person Directory Record ---\n\n");

    // Display Record 1
    printf("Name:   %s\n", p1.name);
    printf("Age:    %d\n", p1.age);
    printf("Gender: ");
    // Since enums are integers under the hood, we translate them back to readable strings
    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    printf("\n---------------------------\n\n");

    // Display Record 2
    printf("Name:   %s\n", p2.name);
    printf("Age:    %d\n", p2.age);
    printf("Gender: ");
    switch (p2.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
