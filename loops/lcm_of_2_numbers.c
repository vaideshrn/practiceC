#include <stdio.h>
void main() {
    int a, b, n, m, temp, lcm;
    printf("Please enter two numbers\n");
    scanf("%d %d", &a, &b);
    n = a;
    m = b;
    while (b!=0) {
        temp = b;
        b = b % a;
        a = temp;
    }

    lcm = (n * m) / a;
    printf("The lcm of %d and %d is %d\n", n, m, lcm);
}
