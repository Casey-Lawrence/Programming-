/*
Program that uses an array to enter 5 integers , copy contents in to another array using loop
Author : Casey Edwards Lawrence 
Date : 14/11/22

*/

#include <stdio.h>

#define SIZE 5 // symbloic name


int main ()

{
    int var1[SIZE];
    int var2[SIZE];
    int i;



    printf("Enter %d integers \n ",SIZE );
// assign values in to array 1 
    for(i = 0 ; i < SIZE ; i++)
    {
        scanf("%d", &var1[i]);

    }
// copy values in to array 2 

    for(i = 0; i < SIZE; i++)
    {
        var2[i] = var1[i];

    }

// display array contents 

    for (i = 0; i < SIZE ; i++)
    {
        printf("\n array 1 = %d, array 2 = %d", var1[i], var2[i]);
    }

    return 0;

}