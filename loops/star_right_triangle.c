#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) { // Outer loop for rows
        for (int j = 1; j <= i-1; j++) { // Inner loop for columns
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
