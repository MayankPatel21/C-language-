#include <stdio.h>

int main() {
    int mode;

    printf("Select Smart Home Mode:\n");
    printf("1. Sleep Mode\n2. Away Mode\n3. Party Mode\n4. Work Mode\n");
    scanf("%d", &mode);

    switch(mode) {
        case 1:
            printf("Sleep Mode activated: Lights dimmed, A/C on silent, doors locked.\n");
            break;
        case 2:
            printf("Away Mode activated: All appliances off, security system armed.\n");
            break;
        case 3:
            printf("Party Mode activated: Lights set to dynamic, music system ON.\n");
            break;
        case 4:
            printf("Work Mode activated: Lights bright, notifications silenced.\n");
            break;
        default:
            printf("Invalid mode selected.\n");
    }

    return 0;
}
