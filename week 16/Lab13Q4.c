/*
Passing 1-D Array. Make a copy of Q2 but this time, use your function to
change the contents of the array
Author: Casey Edwards Lawrence
Date: 22/02/23
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

    value[i] = num_array(value);

    printf("\nValues multiplied by 2 = %d ", value[i]);

return 0;
} // end main

int num_array(int my_array[])
{
    int i;

    for (i = 0; i < SIZE; i++)
    {

        my_array[i]= (my_array[i] *2);

        printf("contents = %d\n\n", my_array[i]);

    } // end for 

return my_array[i];
}
