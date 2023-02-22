/*
Program to display numbers in reverse order 

Author: Casey Edwards Lawrence 

Date: 17/10/2022
*/

#include <stdio.h>

int main()

{
    int num1 ;
    int num2 ;
    int num3 ;
    int num4 ;


    printf( "Enter 4 numbers" ); 
    scanf("%d, %d, %d, %d", &num1, &num2, &num3, &num4);

    printf("You have entered %d, %d, %d, %d", num4, num3, num2, num1);

    return 0;


}