#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180) {
        if (a == b && b == c) {
            printf("Equilateral triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles triangle.\n");
        } else {
            printf("Scalene triangle.\n");
        }
    } else {
        printf("Invalid triangle. Sum of angles is not 180.\n");
    }

    return 0;
}
