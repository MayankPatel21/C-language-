#include <stdio.h>

int main() {
    int shape;
    float area, radius, length, breadth;

    printf("Choose a shape:\n1. Circle\n2. Rectangle\n3. Square\n");
    printf("Enter your choice: ");
    scanf("%d", &shape);

    switch(shape) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;
        case 3:
            printf("Enter side: ");
            scanf("%f", &length);
            area = length * length;
            printf("Area of Square = %.2f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
