#include <stdio.h>

int main() {
    for(int i = 1; i <= 30; i++) {
        if(i % 4 == 0)
            printf("%d → Quad\n", i);
        else
            printf("%d\n", i);
    }

    return 0;
}
