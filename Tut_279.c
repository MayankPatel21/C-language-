#include <stdio.h>

int main() {
    for(int i = 1; i <= 20; i++) {
        if(i % 4 == 0)
            continue;

        printf("Square of %d = %d\n", i, i * i);
    }

    return 0;
}
