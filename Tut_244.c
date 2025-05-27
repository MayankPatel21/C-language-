#include <stdio.h>

int main() {
    int a = 5, b = 10;

    for(int i = 0; i < 1; i++) {  // just using loop for uniqueness
        a = a + b;
        b = a - b;
        a = a - b;
    }

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
