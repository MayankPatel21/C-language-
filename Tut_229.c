#include <stdio.h>

int main() {
    int num = 12345;

    for(int div = 10000; div >= 1; div /= 10) {
        int digit = (num / div) % 10;
        printf("%d\n", digit);
    }

    return 0;
}
