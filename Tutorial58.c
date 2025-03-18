#include <stdio.h>

int main() {
    char ch;

    // Asking the user for input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
