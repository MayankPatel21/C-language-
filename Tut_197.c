#include <stdio.h>

int main() {
    char signal;
    printf("Enter traffic signal color (R/G/Y): ");
    scanf(" %c", &signal);

    if (signal == 'R' || signal == 'r') {
        printf("Stop!\n");
    } else if (signal == 'Y' || signal == 'y') {
        printf("Get Ready!\n");
    } else if (signal == 'G' || signal == 'g') {
        printf("Go!\n");
    } else {
        printf("Invalid signal color.\n");
    }

    return 0;
}
