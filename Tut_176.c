#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    printf("Enter your password: ");
    scanf("%s", password);

    int len = strlen(password);

    if (len < 6) {
        printf("Password is too short.\n");
    } else if (len >= 6 && len <= 10) {
        printf("Password strength: Moderate\n");
    } else {
        printf("Password strength: Strong\n");
    }

    return 0;
}
