#include<stdio.h>

int main()
 {
    int length, breadth;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    printf("Area = %d\n", length * breadth);
    printf("Perimeter = %d\n", 2 * (length + breadth));

    return 0;
}
