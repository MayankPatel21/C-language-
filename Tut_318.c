#include <stdio.h>

int main() {
    int code;

    printf("Enter weather code (1-5):\n");
    printf("1. Sunny\n2. Rainy\n3. Cloudy\n4. Stormy\n5. Snowy\n");
    scanf("%d", &code);

    switch(code) {
        case 1: printf("Weather: Sunny ☀️ — A great day to go outside!\n"); break;
        case 2: printf("Weather: Rainy 🌧️ — Carry an umbrella.\n"); break;
        case 3: printf("Weather: Cloudy ☁️ — Might rain later.\n"); break;
        case 4: printf("Weather: Stormy ⚡ — Stay indoors!\n"); break;
        case 5: printf("Weather: Snowy ❄️ — Dress warmly!\n"); break;
        default: printf("Invalid weather code.\n");
    }

    return 0;
}
