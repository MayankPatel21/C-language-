#include <stdio.h>

int main() {
    int month;

    printf("Enter your birth month (1–12): ");
    scanf("%d", &month);

    switch(month) {
        case 1:  printf("Your zodiac might be Capricorn or Aquarius\n"); break;
        case 2:  printf("Your zodiac might be Aquarius or Pisces\n"); break;
        case 3:  printf("Your zodiac might be Pisces or Aries\n"); break;
        case 4:  printf("Your zodiac might be Aries or Taurus\n"); break;
        case 5:  printf("Your zodiac might be Taurus or Gemini\n"); break;
        case 6:  printf("Your zodiac might be Gemini or Cancer\n"); break;
        case 7:  printf("Your zodiac might be Cancer or Leo\n"); break;
        case 8:  printf("Your zodiac might be Leo or Virgo\n"); break;
        case 9:  printf("Your zodiac might be Virgo or Libra\n"); break;
        case 10: printf("Your zodiac might be Libra or Scorpio\n"); break;
        case 11: printf("Your zodiac might be Scorpio or Sagittarius\n"); break;
        case 12: printf("Your zodiac might be Sagittarius or Capricorn\n"); break;
        default: printf("Invalid month!\n");
    }

    return 0;
}
