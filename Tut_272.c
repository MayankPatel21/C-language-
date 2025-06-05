#include <stdio.h>

int main() {
    int angles[][3] = {
        {60, 60, 60}, {90, 45, 45}, {100, 40, 40}, {30, 60, 90}
    };

    for(int i = 0; i < 4; i++) {
        int a = angles[i][0], b = angles[i][1], c = angles[i][2];

        if(a + b + c != 180) {
            printf("Invalid triangle\n");
        }
        else if(a == 90 || b == 90 || c == 90) {
            printf("Right-angled triangle\n");
        }
        else if(a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        else if(a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        }
        else {
            printf("Scalene triangle\n");
        }
    }

    return 0;
}
