#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        printf("%d is a century year.\n", year);
        
        if (year % 400 == 0) {
            printf("It is also a leap year.\n");
        } else {
            printf("But it is NOT a leap year.\n");
        }
    } else {
        printf("%d is NOT a century year.\n", year);
        
        if (year % 4 == 0) {
            printf("However, it is a leap year.\n");
        } else {
            printf("And it is NOT a leap year.\n");
        }
    }

    return 0;
}
