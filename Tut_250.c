#include <stdio.h>

int main() {
    int num = 98765;

    for(; num >= 10; num /= 10);  // loop until only first digit is left

    printf("First digit is: %d\n", num);
    return 0;
}
