#include <stdio.h>

int main() {
    float sum = 0.0;

    for(int i = 1; i <= 10; i++) {
        sum += 1.0 / i;
    }

    printf("Sum of series: %.2f\n", sum);
    return 0;
}
