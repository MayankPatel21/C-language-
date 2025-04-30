#include <stdio.h>

int main() {
    int code;
    printf("Enter the secret 4-digit code: ");
    scanf("%d", &code);

    if (code == 4321) {
        printf("Access Granted. Welcome Agent X!\n");
    } else if (code >= 4000 && code <= 4999) {
        printf("Close! But not quite right.\n");
    } else {
        printf("Intruder Alert!\n");
    }

    return 0;
}
