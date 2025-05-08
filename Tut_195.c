#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        printf("It is a century year.\n");
    } else {
        printf("It is not a century year.\n");
    }

    return 0;
}
