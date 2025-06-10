#include <stdio.h>

int main() {
    for(int i = 30; i >= 1; i--) {
        if(i % 5 == 0)
            continue;
        printf("%d ", i);
    }
    return 0;
}
