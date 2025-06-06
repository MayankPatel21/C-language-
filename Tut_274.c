#include <stdio.h>

int main() {
    char str[] = "C@ptain123_Code!";
    int upper = 0, lower = 0, digit = 0, special = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if(str[i] >= '0' && str[i] <= '9')
            digit++;
        else
            special++;
    }

    printf("Uppercase: %d\nLowercase: %d\nDigits: %d\nSpecial characters: %d\n", upper, lower, digit, special);
    return 0;
}
