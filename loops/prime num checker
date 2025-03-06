#include <stdio.h>
void main(){
    int n, i, r;
    printf("Enter a num:");
    scanf("%d", &n);

    for (i=2; i<n; i++) {
        r = n % i;

        if (r==0) {
            printf("%d is not a prime number\n", n);
            break;
        }

        else if (n-1==i && r!=0) {
            printf("%d is a prime number\n", n);
        }
    }
}
