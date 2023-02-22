/*
Program to tell user if input is odd or even 

Author: Casey Edwards Lawrence 

Date: 24/10/22
*/

#include <stdio.h>

int main ()
{
    int num1;
    float num2;

    printf("Enter a number between 1 - 100");
    while(getchar() != '\n');
    scanf("%d", &num1);

    num2 = num1%2 ;

    if (num2 != 0)
    {
    printf("The number you have entered is odd ");
    }

    if (num2 ==0)
    {
    printf("The number you have entered is even");
    }
    return 0;




}