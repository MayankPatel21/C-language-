#include <stdio.h>

int main() {
    for(int num = 100; num <= 999; num++) {
        int original = num;
        int sum = 0;

        for(int temp = num; temp > 0; temp /= 10) {
            int digit = temp % 10;
            sum += digit * digit * digit;
        }

        if(sum == original) {
            printf("%d is an Armstrong number\n", original);
        }
    }

    return 0;
}
