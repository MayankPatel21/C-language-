#include <stdio.h>

int main() {
    float amount;
    printf("Enter total purchase amount: ");
    scanf("%f", &amount);

    if (amount >= 1000) {
        printf("You get a 20%% discount!\n");
    } else if (amount >= 500) {
        printf("You get a 10%% discount!\n");
    } else {
        printf("No discount available.\n");
    }

    return 0;
}
