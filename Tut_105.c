#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (1 to 100): ");
    scanf("%d", &num);

    if (num >= 1 && num <= 100) {
        if (num % 2 == 0) {
            printf("The number is Even.\n");
        } else {
            printf("The number is Odd.\n");
        }
    }
    else {
        printf("Number is out of range!\n");
    }

    return 0;
}
