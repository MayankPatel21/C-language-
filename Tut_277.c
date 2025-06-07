#include <stdio.h>

int main() {
    int num = 1223334444;
    int freq[10] = {0};

    for(; num > 0; num /= 10) {
        int digit = num % 10;
        freq[digit]++;
    }

    for(int i = 0; i < 10; i++) {
        if(freq[i] > 0)
            printf("Digit %d → %d times\n", i, freq[i]);
    }

    return 0;
}
