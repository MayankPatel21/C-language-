#include <stdio.h>

int main() {
    int length;

    printf("Enter your password length: ");
    scanf("%d", &length);

    switch(length / 4) {
        case 0:
        case 1:
            printf("Weak password: Add more characters!\n");
            break;
        case 2:
            printf("Moderate password: Consider using symbols and numbers.\n");
            break;
        case 3:
        case 4:
            printf("Strong password: Good job!\n");
            break;
        default:
            printf("Very strong password: Excellent security!\n");
    }

    return 0;
}
