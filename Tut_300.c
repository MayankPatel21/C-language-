#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch) {
        case '0'...'9':
            printf("It's a digit.\n");
            break;
        case 'A'...'Z':
        case 'a'...'z':
            printf("It's an alphabet.\n");
            break;
        default:
            printf("It's a special character.\n");
    }

    return 0;
}
