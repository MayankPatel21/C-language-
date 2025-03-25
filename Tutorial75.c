#include <stdio.h>

int main() {
    int a, b, c;

    // Asking the user for input
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking triangle validity using the Triangle Inequality Theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The given sides can form a valid triangle.\n");
    } else {
        printf("The given sides CANNOT form a triangle.\n");
    }

    return 0;
}
