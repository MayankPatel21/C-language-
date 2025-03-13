#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase for uniformity
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("The character is a vowel.\n");
    } else if ((ch >= 'a' && ch <= 'z')) {
        printf("The character is a consonant.\n");
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
