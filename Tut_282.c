#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {
        if(i % 2 == 0)
            continue;

        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
