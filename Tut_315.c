#include <stdio.h>

int main() {
    int festival;

    printf("Choose a festival:\n1. Diwali\n2. Holi\n3. Christmas\n4. Eid\n5. New Year\n");
    scanf("%d", &festival);

    switch(festival) {
        case 1: printf("Wishing you a bright and joyful Diwali!\n"); break;
        case 2: printf("Happy Holi! Enjoy the colors of life.\n"); break;
        case 3: printf("Merry Christmas! 🎄\n"); break;
        case 4: printf("Eid Mubarak! 🌙\n"); break;
        case 5: printf("Happy New Year! 🎉\n"); break;
        default: printf("Invalid festival choice.\n");
    }

    return 0;
}
