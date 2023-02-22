/*
Passing 1-D Array. Write a program that uses a function to calculate the average of 5
numbers in an array.
Author : Casey Edwards Lawrence 
Date : 20/02/23
*/

#include <stdio.h>

#define SIZE 5 

// function signature 
float avg_fxn(int[]); 

int main()
{
    int values[SIZE];
    int i; 
    float avg; 

    printf("Enter %d numbers and the average will be displayed\n", SIZE);

    // enter data in to array

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", & values [i]);

    } // end for 

    avg = avg_fxn(values);

    printf("The average of these numbers is %.2f", avg);

    return 0;
} // end main

// function will calculate the average 
float avg_fxn(int my_array[])
{
    int sum =0;
    float avg = 0;
    int i;

    // calculate sum 
    for (i =0; i < SIZE; i++)
    {
        sum = sum + my_array[i];
    } // end for 

    avg = sum / SIZE; 

    return avg; 
} // end avg_fxn()