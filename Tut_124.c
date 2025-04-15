#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 5) {
        printf("Ticket is free for kids under 5.\n");
    } else if (age <= 18) {
        printf("Child ticket: $8\n");
    } else if (age <= 60) {
        printf("Adult ticket: $12\n");
    } else {
        printf("Senior citizen ticket: $6\n");
    }

    return 0;
}
