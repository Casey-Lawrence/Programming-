/*
Program with function to calculate sum and average of numbers 
Author : Casey Edwards Lawrence
Date: 10/02/2023
*/

#include <stdio.h>

#define SIZE 3

void sum (int, int, int); 

void average (int);

int main()
{
    int num1, num2, num3;

    printf("Please enter %d numbers and the sum and the average will be displayed on screen\n\n", SIZE);
    scanf("%d,%d,%d" ,&num1, &num2, &num3);

    // find the sum of these numbers 
    sum (num1, num2, num3); 

return 0;
} // end main

void sum (int num1, int num2, int num3)
{
    int total =0;

    total = num1 + num2 + num3;

    // print the sum of these numbers 
    printf("The sum of %d , %d, and %d is %d\n\n", num1, num2, num3, total);

    // find average of these numbers 
    average (total);
} // end sum

void average (int total)
{
    int avg = 0;

    avg = total / SIZE;

    printf("The average of these numbers is %d\n\n",avg );

} // end average 