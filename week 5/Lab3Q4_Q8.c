/*
Program to calculate sum and average of float numbers 

Author: Casey Edwards Lawrence 

Date: 18/10/2022

*/

#include<stdio.h>

int main ()
{
    float num1 ;
    float num2 ;
    float num3 ;
    float sum ;
    float avg ;

    printf("Please enter 3 float numbers: ");
    scanf("%f , %f , %f", &num1, &num2 , &num3);

    sum = num1 + num2 + num3 ;

    printf("The sum of these numbers is %.2f", sum);

    avg = sum/3 ;

    printf("The average of these numbers is %.2f",avg);


    return 0 ;

}