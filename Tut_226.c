#include <stdio.h>

int main() {
    int num = 5;
    long long factorial = 1;

    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %lld\n", num, factorial);
    return 0;
}
