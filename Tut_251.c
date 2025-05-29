#include <stdio.h>

int main() {
    for(int row = 1; row <= 8; row++) {
        for(int col = 1; col <= 8; col++) {
            if((row + col) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
