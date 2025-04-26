#include <stdio.h>

int main() {
    int marks;
    printf("Enter your average marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("You are eligible for a full scholarship!\n");
    } else if (marks >= 75) {
        printf("You are eligible for a half scholarship.\n");
    } else {
        printf("You are not eligible for a scholarship.\n");
    }

    return 0;
}
