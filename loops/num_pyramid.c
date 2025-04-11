#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for columns
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
