#include <stdio.h>
void main() {
    unsigned int n;
    int d, count, digit;
    printf("Enter a number with at least 4 digits: ");
    scanf("%d", &n);
    printf("Enter a digit to count: ");
    scanf("%d", &d);

    while (n!=0) {
        digit = n % 10;
        if (digit == d) {
            count++;
        }
        n = n / 10;
    }
    printf("The number %d is repeated: %d\n",d ,count);
}
