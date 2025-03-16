#include <stdio.h>
int sub(int a, int b);
void main() {
    int num1, num2, soln;
    printf("enter the first number:\n");
    scanf ("%d", &num1);
    printf("enter the second number:\n");
    scanf ("%d", &num2);
    soln =  sub(num1, num2);
    printf("the difference is %d", soln);
}

int sub(int a, int b) {
    int c;
    c = a - b;
    return c;
}
