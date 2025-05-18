#include <stdio.h>

int main() {
    int num = 1234, reversed = 0;

    for (; num != 0; num /= 10) {
        reversed = reversed * 10 + num % 10;
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}
