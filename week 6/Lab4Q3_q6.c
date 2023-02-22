/*
Program to read single number and display value as word
Author: Casey Edwards Lawrence
Date; 02/11/22
*/

#include <stdio.h>

int main ()

{
    int num1;


    printf(" Enter a single number\n ");
    while(getchar() != '\n');
    scanf("%d", &num1);

    switch (num1)
    {
        case '0' :
        {
            printf("You entered Zero");
            break;
        }

        case (1) :
        {
            printf("You entered one");
            break;
        }

        case (2) :
        {
            printf("You entered two");
            break;
        }

        case (3) :
        {
            printf("You entered three");
            break;
        }

        case (4) :
        {
            printf("You entered four");
            break; 
        }

        case (5) :
        {
            printf("You entered five");
            break; 
        }

        case (6) :
        {
            printf("You entered six");
            break; 
        }

        case (7) :
        {
            printf("You entered seven");
            break; 
        }

        case (8) :
        {
            printf("You entered eight");
            break; 
        }

        case (9) :
        {
            printf("You entered nine");
            break; 
        }

    } // end switch

return 0;

}