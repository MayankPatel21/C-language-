#include <stdio.h>

int main() {
    float percentage;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Enter a value between 0 and 100.\n");
    } 
    else if (percentage >= 90) {
        printf("Your grade: A\n");
    } 
    else if (percentage >= 80) {
        printf("Your grade: B\n");
    } 
    else if (percentage >= 70) {
        printf("Your grade: C\n");
    } 
    else if (percentage >= 60) {
        printf("Your grade: D\n");
    } 
    else {
        printf("Your grade: F\n");
    }

    return 0;
}
