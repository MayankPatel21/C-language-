#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 3 == 0) && (num % 5 == 0)) {
        printf("The number is a multiple of both 3 and 5.\n");
    } else if (num % 3 == 0) {
        printf("The number is a multiple of 3.\n");
    } else if (num % 5 == 0) {
        printf("The number is a multiple of 5.\n");
    } else {
        printf("The number is not a multiple of 3 or 5.\n");
    }

    return 0;
}
