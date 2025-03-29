#include <stdio.h>
void main() {
    int f,c;
    printf("enter the temperature in Fahrenheit:");
    scanf("%d",&f);
    c=((f-32)*5)/9;
    printf("%d",c);
}
