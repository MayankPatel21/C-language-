#include <stdio.h>

int main() {
    int a = 48, b = 18, gcd = 1;

    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is %d\n", a, b, gcd);
    return 0;
}
