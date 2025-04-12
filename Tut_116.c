#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 10) {
        printf("Number is in the range 1 to 10.\n");
    } else if (num >= 11 && num <= 100) {
        printf("Number is in the range 11 to 100.\n");
    } else if (num > 100) {
        printf("Number is greater than 100.\n");
    } else {
        printf("Number is zero or negative.\n");
    }

    return 0;
}
