#include <stdio.h>

int main() {
    int issue;

    printf("Select your issue:\n");
    printf("1. No internet\n2. Slow speed\n3. Device not connecting\n4. Router blinking\n");
    scanf("%d", &issue);

    switch(issue) {
        case 1:
            printf("Solution: Restart router. Check ISP status.\n");
            break;
        case 2:
            printf("Solution: Limit devices. Use 5GHz band if possible.\n");
            break;
        case 3:
            printf("Solution: Forget network and reconnect. Check password.\n");
            break;
        case 4:
            printf("Solution: Check cable connections. Contact ISP if blinking red.\n");
            break;
        default:
            printf("Unknown issue selected.\n");
    }

    return 0;
}
