#include <stdio.h>

int main() {
    char bloodGroup;

    printf("Enter your blood group initial (O/A/B/AB): ");
    scanf(" %c", &bloodGroup);

    switch(bloodGroup) {
        case 'O':
        case 'o':
            printf("Universal donor\n");
            break;
        case 'A':
        case 'a':
            printf("Can donate to A and AB\n");
            break;
        case 'B':
        case 'b':
            printf("Can donate to B and AB\n");
            break;
        case 'A'+1: // Trick for 'AB'
            printf("Can receive from all groups\n");
            break;
        default:
            printf("Unknown blood group\n");
    }

    return 0;
}
