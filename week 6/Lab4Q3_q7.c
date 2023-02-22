/*
program to input number to display the day of the week correspomding to the number typed
Author: Casey Edwards Lawrence 
Date : 02/ 11/22

*/

#include <stdio.h>

int main ()

{
    int num1;


// ask user for input 
    printf("Enter a number from 1-7 to display a day of the week ");
    while(getchar() != '\n');//ignore white space 
    scanf("%d", &num1);

    switch(num1)// start switch 
    {
        case(1) :
        {
            printf("Sunday");
            break;
        }// end case 1

        case (2) :
        {
            printf("Monday");
            break;
        } // end case 2

        case (3) :
        {
            printf("Tuesday");
            break;
        }// end case 3 

        case (4) :
        {
            printf("Wednesday");
            break;
        }// end case 4 

        case (5) :
        {
            printf("Thursday");
            break;
        }// end case 5 

        case (6) :
        {
            printf("Friday");
            break;
        }// end case 6 

        case (7) :
        {
            printf("Saturday");
            break;
        }// end case 7 
        
        default :

        { 
            printf("Error, you entered an invalid character");
            break;
        }// end default 

    }// end switch 

    return 0;
}// end main 