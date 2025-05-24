#include <stdio.h>
#include <math.h>

int main() {
    for(int num = 1; num <= 500; num++) {
        int temp = num, sum = 0;

        while(temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if(sum == num) {
            printf("%d is an Armstrong number\n", num);
        }
    }
    return 0;
}
