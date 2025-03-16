#include <stdio.h>
void main() {
    int s;
    printf("Enter your score (Range: 0-100):\n");
    scanf("%d", &s);
    if (s>80 && s<100) {
        printf("Grade: A\n");
    }
    else if (s>60 && s<80) {
        printf("Grade: B\n");
    }
    else if (s>40 && s<60) {
        printf("Grade: C\n");
    }
    else if (s>20 && s<40) {
        printf("Grade: D\n");
    }
    else if (s>0 && s<20) {
        printf("Grade: F\n");
    }
    else {
        printf("Invalid Score\n");
    }
}
