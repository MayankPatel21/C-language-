#include <stdio.h>

int main() {
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 85) {
        printf("Grade: A\n");
    } else if (percentage >= 70) {
        printf("Grade: B\n");
    } else if (percentage >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
