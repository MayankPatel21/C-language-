#include <stdio.h>

int main() {
    int p1, p2;
    printf("Enter choice for Player 1 (1-Rock, 2-Paper, 3-Scissors): ");
    scanf("%d", &p1);
    printf("Enter choice for Player 2 (1-Rock, 2-Paper, 3-Scissors): ");
    scanf("%d", &p2);

    if (p1 == p2) {
        printf("It's a draw!\n");
    } else if ((p1 == 1 && p2 == 3) || (p1 == 2 && p2 == 1) || (p1 == 3 && p2 == 2)) {
        printf("Player 1 wins!\n");
    } else {
        printf("Player 2 wins!\n");
    }

    return 0;
}
