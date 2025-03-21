#include <stdio.h>

int main() {
    int num;

    // Asking the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking divisibility conditions
    if (num % 3 == 0 && num % 7 == 0) {
        printf("%d is a multiple of both 3 and 7.\n", num);
    } else if (num % 3 == 0) {
        printf("%d is a multiple of only 3.\n", num);
    } else if (num % 7 == 0) {
        printf("%d is a multiple of only 7.\n", num);
    } else {
        printf("%d is NOT a multiple of 3 or 7.\n", num);
    }

    return 0;
}
