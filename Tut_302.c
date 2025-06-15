#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    switch(num % 2) {
        case 0:
            printf("Even number\n");
            break;
        case 1:
        case -1:
            printf("Odd number\n");
            break;
    }

    return 0;
}
