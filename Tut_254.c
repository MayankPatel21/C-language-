#include <stdio.h>

int main() {
    int num = 78249, even = 0, odd = 0;

    for(; num > 0; num /= 10) {
        int digit = num % 10;
        if(digit % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even digits: %d\nOdd digits: %d\n", even, odd);
    return 0;
}
