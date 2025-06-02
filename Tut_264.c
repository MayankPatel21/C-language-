#include <stdio.h>

int main() {
    int num = 13, binary[32], i;

    for(i = 0; num > 0; i++) {
        binary[i] = num % 2;
        num /= 2;
    }

    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
