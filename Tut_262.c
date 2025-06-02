#include <stdio.h>

int main() {
    int num = 12345, sum = 0;

    for(; num > 0; num /= 10) {
        sum += num % 10;
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
