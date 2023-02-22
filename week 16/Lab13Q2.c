/*
Passing 1-D Array. Write a program that uses a function to find the highest number in
an array containing 5 numbers.
Author : Casey Edwards Lawrence 
Date : 20/02/2023
*/

#include <stdio.h>

#define SIZE 5

int num_array(int[]);

int main ()
{
    int value[SIZE];
    int high;
    int i; 

    printf("Enter %d numbers\n", SIZE); 

    for(i =0; i < SIZE; i++)
    {
        scanf("%d", &value[i]);

    } // end for 

    high = num_array(value);

    printf("\nThe highest value is %d", high);

return 0;
} // end main

int num_array(int my_array[])
{
    int max = 0; 
    int i = 0;

    max = my_array[0]; 

    for (i = 0; i < SIZE; i++)
    {

        if (my_array[i]> max)
        {
            max = my_array[i];
        } // end if 

    } // end for 

return max;
}
