#include<stdio.h>

int main()
 {
    float radius, pi;
    pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area = %f\n", pi * radius * radius);
    printf("Circumference = %f\n", 2 * pi * radius);

    return 0;
}