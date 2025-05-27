#include <stdio.h>

int main() {
    for(int i = 32; i <= 126; i++) {
        printf("ASCII %d = %c\n", i, i);
    }
    return 0;
}
