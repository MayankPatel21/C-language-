#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A\nExcellent!\n");
    } else if (marks >= 75) {
        printf("Grade: B\nGood job.\n");
    } else if (marks >= 50) {
        printf("Grade: C\nYou passed.\n");
    } else if (marks >= 0) {
        printf("Grade: F\nYou failed. Try again.\n");
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
