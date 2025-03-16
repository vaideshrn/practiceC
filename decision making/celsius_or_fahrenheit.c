#include <stdio.h>

void main() {
    char temp;
    int i, c, f;
    printf("Do you want to convert to celsius (c) or fahrenheit (f), type the letter in the bracket adjacent to your required temp: \n");
    scanf("%s", &temp);

    if (temp == 'c') {
        printf("to convert to celsius enter the temperature: \n");
        scanf("%d", &i);
        c = (((i - 32) * 5)/9);
        printf("temperature is : %d \n", c);
    }

    else if (temp == 'f') {
        printf("to convert to fahrenheit enter the temperature : \n");
        scanf("%d", &i);
        f = ((i*9)/5)+32 ;
        printf("temperature is : %d \n", f);
    } else {
        printf ("Invalid Input");
    }
}
