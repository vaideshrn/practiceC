#include <stdio.h>
int div(int a, int b);
void main() {
    int num1, num2, soln;
    printf("enter the first number:\n");
    scanf ("%d", &num1);
    printf("enter the second number:\n");
    scanf ("%d", &num2);
    soln =  div(num1, num2);
    printf("the quoteint is %d", soln);
}

int div(int a, int b) {
    int c;
    c = a/b;
    return c;
}
