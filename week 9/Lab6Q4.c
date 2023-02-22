/*
Program that defines an integer array with 5 elements , enters values 
define another array and copu the values from the 1st to 2nd in reverse order
Author : Casey Edwards Lawrence 
Date : 15/11/22

*/

#include <stdio.h>

#define SIZE 5

int main ()

{

    int array1[SIZE] = {0};
    int array2[SIZE] = {0};
    int i;
    int j = 4; 

    printf("Enter %d integers", SIZE);

    for(i = 0; i < SIZE; i++ )
    {
        scanf("%d", &array1[i]);

    }

// copy values in to array2

    for(i = 0; i < SIZE; i++)
    {
        array2[j] = array1[i];

    // decrement j 
        j--;
    }

// display values 

    for(i = 0; i < SIZE; i++)
    {
        printf("%d", array2[i]); 
    }

    return 0; 

}