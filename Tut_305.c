#include <stdio.h>

int main() {
    int percentage;

    printf("Enter percentage: ");
    scanf("%d", &percentage);

    switch(percentage / 10) {
        case 10:
        case 9:
            printf("Grade: A+ (Excellent)\n");
            break;
        case 8:
            printf("Grade: A (Very Good)\n");
            break;
        case 7:
            printf("Grade: B (Good)\n");
            break;
        case 6:
            printf("Grade: C (Average)\n");
            break;
        case 5:
            printf("Grade: D (Needs Improvement)\n");
            break;
        default:
            printf("Grade: F (Fail)\n");
    }

    return 0;
}
