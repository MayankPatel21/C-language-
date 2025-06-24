#include <stdio.h>

int main() {
    int percentage;

    printf("Enter your attendance percentage: ");
    scanf("%d", &percentage);

    switch(percentage / 10) {
        case 10:
        case 9:
        case 8:
            printf("Status: Excellent attendance\n");
            break;
        case 7:
        case 6:
            printf("Status: Satisfactory attendance\n");
            break;
        case 5:
            printf("Status: Warning! Attend more classes.\n");
            break;
        default:
            printf("Status: Detained due to low attendance!\n");
    }

    return 0;
}
