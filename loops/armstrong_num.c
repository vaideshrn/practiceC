#include <stdio.h>
#include <math.h>
void main() {
    int n, m, p, armstrong, x, z, count = 0;

    printf ("enter the num: \n");
    scanf ("%d", &n);
    m = n;
    p =n;

    while (m!=0) {
        z = m%10;
        count += 1;
        m = m/10;
    }

    while (n!=0) {
        x = n %10;
        x = pow (x, count);
        armstrong = armstrong + x;
        n = n / 10;
    }

    if (armstrong == p) {
        printf ("%d is an armstrong number\n", p);
    }
    else {
        printf ("%d is not an armstrong number\n", p);
    }
}
