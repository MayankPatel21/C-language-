#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 10) {
        printf("The number is between 1 and 10.\n");
    } else if (num >= 11 && num <= 100) {
        printf("The number is between 11 and 100.\n");
    } else {
        printf("The number is outside the 1-100 range.\n");
    }

    return 0;
}
