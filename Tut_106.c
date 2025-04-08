#include <stdio.h>
#include <string.h>

int main() {
    char password[50];

    printf("Enter your password: ");
    scanf("%s", password);

    int length = strlen(password);

    if (length < 5) {
        printf("Password Strength: Weak\n");
    } 
    else if (length <= 8) {
        printf("Password Strength: Medium\n");
    } 
    else {
        printf("Password Strength: Strong\n");
    }

    return 0;
}
