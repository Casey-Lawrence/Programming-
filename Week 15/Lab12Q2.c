/*
Program to demonstrate returning a value from a funcion average 
Author : Casey Edwards Lawrence 
DAte: 10/02/2023
*/

#include <stdio.h>

#define SIZE 3

int average (int, int, int); 

int main ()
{
    int num1, num2, num3; 
    int avg = 0;

    printf("PLease enter any %d numbers\n\n", SIZE);
    scanf("%d, %d, %d", &num1, &num2, &num3); 

    // get the average of these numbers 
    avg = average(num1, num2, num3);

    printf("The average of these numbers is %d", avg); 
}

int average (int num1, int num2, int num3)
{
    int sum, i; 

    sum = num1 + num2 + num3; 

    i = sum / SIZE; 

    return i; 
}