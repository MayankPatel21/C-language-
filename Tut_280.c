#include <stdio.h>

int main() {
    int count = 0;

    for(int i = 1; ; i++) {
        if(i % 3 == 0 && i % 7 == 0) {
            printf("%d is divisible by both 3 and 7\n", i);
            count++;
        }

        if(count == 5)
            break;
    }

    return 0;
}
