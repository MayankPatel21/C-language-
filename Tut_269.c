#include <stdio.h>

int main() {
    char text[] = "HelloWorld";
    
    for(int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
           ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("%c is a Vowel\n", ch);
        else
            printf("%c is a Consonant\n", ch);
    }

    return 0;
}
