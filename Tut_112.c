#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("It's an alphabet.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("It's a digit.\n");
    } else {
        printf("It's a special symbol.\n");
    }

    return 0;
}
