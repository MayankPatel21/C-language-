#include <stdio.h>

int main() {
    char str[] = "This is a simple sentence";
    int count = 1;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i + 1] != ' ') {
            count++;
        }
    }

    printf("Number of words: %d\n", count);
    return 0;
}
