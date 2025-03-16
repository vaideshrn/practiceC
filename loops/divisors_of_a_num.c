#include <stdio.h>
void main() {
    int a, i, x;
    printf("Please enter a num:\n");
    scanf("%d", &a);
    printf("All divisors of %d are: ", a);
    for (i= 1; i<=a; i++) {
        x = a % i;
        if (x==0) {
            printf("%d ", i);
        }
    }
}
