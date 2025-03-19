#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    char correctPassword[] = "Cprogramming123"; // Predefined password

    printf("Enter the password: ");
    scanf("%s", password);

    if (strcmp(password, correctPassword) == 0) {
        printf("Access Granted! Welcome.\n");
    } else {
        printf("Access Denied! Incorrect Password.\n");
    }
    return 0;
}
