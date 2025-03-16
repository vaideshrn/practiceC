#include <stdio.h>
void main() {
    int n, a = 0, b = 1, c, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("The Fibonacci number = %d\n", a);
        return;
    }
    if (n == 2) {
        printf("The Fibonacci number = %d\n", b);
        return;
    }
    for (i = 2; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("The Fibonacci number = %d\n", c);
}
