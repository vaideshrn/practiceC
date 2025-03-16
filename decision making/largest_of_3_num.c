#include <stdio.h>
void main() {
    int a, b, c, l;
    printf("Enter 3 numbers:\n");
    scanf("%d  %d  %d",&a, &b, &c);
    l = (a > b) ? ((a > c)? a : c) : ((b > c)? b : c);
    printf("The largest number is : %d\n", l);
}
