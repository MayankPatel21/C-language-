#include <stdio.h>

int main() {
    int base = 2, exponent = 5, result = 1;

    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
