#include <stdio.h>

int main() {
    int num = 5672, sum = 0;

    for(; num > 0; num /= 10) {
        sum += num % 10;
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
