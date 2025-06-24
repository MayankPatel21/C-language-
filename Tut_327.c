#include <stdio.h>

int main() {
    int battery;

    printf("Enter current battery percentage: ");
    scanf("%d", &battery);

    switch(battery / 20) {
        case 5:
        case 4:
            printf("Battery: Full 🔋\n");
            break;
        case 3:
            printf("Battery: Good ✅\n");
            break;
        case 2:
            printf("Battery: Low ⚠️\n");
            break;
        case 1:
        case 0:
            printf("Battery: Critical! Please charge now 🔌\n");
            break;
        default:
            printf("Invalid battery level.\n");
    }

    return 0;
}
