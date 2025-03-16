#include <stdio.h>
void main() {
    int n, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n>0) {
        printf("The number is a positive number");
    }
    else if (n<0){
        printf("The number is a negative number");
    }
    else {
        printf("The number is 0");
    }
}
