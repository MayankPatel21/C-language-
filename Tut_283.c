#include <stdio.h>

int main() {
    char str[] = "OpenAIisAwesome";
    int vowels = 0, consonants = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if(ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U'||
               ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
