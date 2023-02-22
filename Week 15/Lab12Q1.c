/*
Program to demonstrate returning a value from a function even or odd 
Author: Casey Edwards Lawrence 
Date: 10/02/2023
*/

#include <stdio.h>

int evenOdd (int);

int main()
{
    int check;
    int num1;

    printf("Please enter any number\n\n");
    scanf("%d", &num1);

    // check if number is even or odd 
    check = evenOdd(num1);

    if(check == 1)
    {
        printf("even");
    } // end if 
    else 
    {
        printf("odd");
    } // end else 

    return 0;
} // end main 

int evenOdd (int num1)
{
    if ((num1 % 2)== 0)
    {
        return 1;
    } // end if 
    else 
    {
        return 0;
    } // end else 

} // end evenOdd
