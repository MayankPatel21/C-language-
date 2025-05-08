#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(password, "abc123") == 0) {
        printf("Login successful!\n");
    } else {
        printf("Incorrect password.\n");
    }

    return 0;
}
