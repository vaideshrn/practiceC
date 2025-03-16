#include <stdio.h>
int mod(int a, int b);
void main() {
    int num1, num2, soln;
    printf("enter the first number:\n");
    scanf ("%d", &num1);
    printf("enter the second number:\n");
    scanf ("%d", &num2);
    soln =  mod(num1, num2);
    printf("the remainder is %d", soln);
}
int mod(int a, int b) {
    int c;
    c = a % b;
    return c;
}
