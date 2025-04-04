#include <stdio.h>

int main() {
    int sub1, sub2, sub3;
    printf("Enter marks for subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &sub3);

    if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40) {
        printf("You have passed all subjects.\n");
    } else {
        printf("You have failed in one or more subjects.\n");
    }

    return 0;
}
