#include <stdio.h>

int main() {
    for(int num = 1; num <= 20; num++) {
        int isPrime = 1;

        if(num == 1) {
            isPrime = 0;
        } else {
            for(int i = 2; i <= num / 2; i++) {
                if(num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime)
            printf("%d is Prime\n", num);
        else
            printf("%d is Not Prime\n", num);
    }

    return 0;
}
