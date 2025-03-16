#include <stdio.h>
void main() {
    int a, n, s, count=0;
    printf("Enter a number: \n");
    scanf("%d", &a);
    s = a;
    while (a != 0) {
        n = a % 10;
        count = (count*10) + n;
        a = a/10;
    }

    if (count == s) {
        printf("%d is a palindrome number\n", s);
    }
    else {
        printf("%d is not a palindrome number\n", s);
    }
}
