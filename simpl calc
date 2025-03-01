#include <stdio.h>
int main()
{
    int i,j,k;
    char x;
    printf("Enter Number 1: ");
    scanf("%d", &i);

    printf("\nEnter Number 2: ");
    scanf("%d", &j);

    printf("\nEnter your desired operator (+, -, x, /, m for modulus):");
    scanf(" %c", &x);
    printf("\n");

    switch (x){
        case '+':
            k = i + j;
            printf("Sum is = %d\n", k);
        break;

        case '-':
            k = i - j;
            printf("Difference is = %d\n", k);
        break;

        case 'x':
            k = i * j;
            printf("Product is = %d\n", k);
        break;

        case '/':
            if (j != 0) { // Prevent division by zero
                k = i / j;
                printf("Quotient is = %d\n", k);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        break;

        case 'm':
            if (j != 0) { // Prevent modulo by zero
                k = i % j;
                printf("Remainder is = %d\n", k);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
        break;
        default:
            printf("Invalid\n");
        break;

    }
    return 0;
}
