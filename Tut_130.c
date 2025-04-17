#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    printf("Enter your password: ");
    scanf("%s", password);

    int length = strlen(password);

    if (length < 6) {
        printf("Password is too short.\n");
    } else if (length >= 6 && length <= 10) {
        printf("Password is of medium strength.\n");
    } else {
        printf("Password is strong.\n");
    }

    return 0;
}
