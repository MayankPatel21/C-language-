#include <stdio.h>

int main() {
    int choice;
    printf("Menu:\n1. Burger - $5\n2. Pizza - $8\n3. Sandwich - $4\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You selected Burger. Price: $5\n");
    } else if (choice == 2) {
        printf("You selected Pizza. Price: $8\n");
    } else if (choice == 3) {
        printf("You selected Sandwich. Price: $4\n");
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
