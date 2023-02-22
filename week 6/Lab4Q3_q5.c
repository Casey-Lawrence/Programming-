/*
Program to input three numbers and determine if they form a valid triangle
Author : Casey Edwards Lawrence 
Date: 02/11/22
*/

#include <stdio.h>

int main ()

{

    float side1 = 0;
    float side2 = 0;
    float side3 = 0;


    printf("Enter three lengths to see if they can form a triangle");
    scanf("%f", &side1);
    scanf("%f", &side2);
    scanf("%f", &side3);

// check if valid triangle 


    if  ( ((side1 + side2) > side3 ) )
    {
        if ( ((side2 + side3)> side1 ) )
        {
            if ( ((side3 + side1)> side2) )
            {
                printf("\n This is a valid triangle");

            } //end inner - most if  

        } // end inner if 


    } // end if 
    else
    {
        printf("\n This is not a valid triangle"); 
    } // end else 

    return 0;

} // end main 