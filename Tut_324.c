#include <stdio.h>

int main() {
    int dept;

    printf("Enter department number:\n");
    printf("1. IT\n2. HR\n3. Finance\n4. Marketing\n5. Operations\n");
    scanf("%d", &dept);

    switch(dept) {
        case 1: printf("IT Department: Handles software, hardware, and network systems.\n"); break;
        case 2: printf("HR Department: Manages recruitment, payroll, and employee welfare.\n"); break;
        case 3: printf("Finance Department: Responsible for budgeting and accounting.\n"); break;
        case 4: printf("Marketing Department: Focuses on branding and sales strategies.\n"); break;
        case 5: printf("Operations Department: Ensures efficient day-to-day functioning.\n"); break;
        default: printf("Invalid department number.\n");
    }

    return 0;
}
