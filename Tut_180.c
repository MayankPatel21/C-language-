#include <stdio.h>

int main() {
    int score;
    printf("Enter the score (0-100): ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        printf("Grade: Excellent\n");
    } else if (score >= 75 && score <= 89) {
        printf("Grade: Good\n");
    } else if (score >= 50 && score <= 74) {
        printf("Grade: Average\n");
    } else if (score >= 0 && score <= 49) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid score.\n");
    }

    return 0;
}
