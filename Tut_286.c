#include <stdio.h>

int main() {
    for(int num = 2; num <= 50; num++) {
        int isPrime = 1;

        for(int i = 2; i < num; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
            printf("%d is Prime\n", num);
    }

    return 0;
}
