/*
Display Float numbers to x amount of decimal places 

Author: Casey Edwards Lawrence 

Date: 17/10/2022
*/

#include <stdio.h>

int main ()

{

    float num1 = 0;
    float num2 = 0;
    float num3 = 0;


    printf("\nEnter any decimal number\n");
    scanf("%f", &num1);

    printf("You entered %.4f",num1);

    printf("\nEnter any decimal number\n");
    scanf("%f", &num2);

    printf("You entered %.3f",num2);

    printf("\nEnter any decimal number\n");
    scanf("%f", &num3);

    printf("You entered %.0f", num3);

    return 0;


}