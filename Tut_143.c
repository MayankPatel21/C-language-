#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("Congratulations! You passed.\n");
    } else if (marks >= 0) {
        printf("Sorry! You failed.\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
