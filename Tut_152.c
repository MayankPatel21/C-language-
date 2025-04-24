#include <stdio.h>

int main() {
    float bmi;
    printf("Enter your BMI: ");
    scanf("%f", &bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Normal weight\n");
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }

    return 0;
}
