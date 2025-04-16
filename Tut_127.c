#include <stdio.h>

int main() {
    float percentage;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90) {
        printf("Outstanding (Grade A+)\n");
    } else if (percentage >= 75) {
        printf("Excellent (Grade A)\n");
    } else if (percentage >= 60) {
        printf("Good (Grade B)\n");
    } else if (percentage >= 40) {
        printf("Pass (Grade C)\n");
    } else {
        printf("Fail (Grade F)\n");
    }

    return 0;
}
