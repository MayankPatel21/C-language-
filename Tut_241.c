#include <stdio.h>
#include <math.h>

int main() {
    int binary = 1101, decimal = 0, i = 0;

    for(; binary > 0; binary /= 10, i++) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
    }

    printf("Decimal value: %d\n", decimal);
    return 0;
}
