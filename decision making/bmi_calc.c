#include <stdio.h>
void main() {
    float w, h, bmi;
    printf("Enter your weight in kg:\n");
    scanf("%f",&w);
    printf("\nEnter your height in m:\n");
    scanf("%f",&h);
    bmi = w/(h*h);
    if (bmi < 18.5) {
        printf("Underweight (%f)\n", bmi);
    }
    else if (bmi > 18.5 && bmi < 24.9) {
        printf("Normal weight (%f)\n", bmi);
    }
    else if (bmi > 24.9) {
        printf("Overweight (%f)\n", bmi);
    }
}
