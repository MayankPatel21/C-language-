#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    printf("Enter the password: ");
    scanf("%s", password);

    if (strcmp(password, "Open123") == 0) {
        printf("Access granted.\n");
    } else {
        printf("Access denied. Incorrect password.\n");
    }

    return 0;
}
