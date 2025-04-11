#include <stdio.h>
void main(){
    int n, count=0;
    printf("enter a num:");
    scanf("%d", &n);

    while (n!=0) {
        n = n/10;
        count++;
    }
    printf("The number of digits are %d", count);
}
