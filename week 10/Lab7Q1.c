/*
    Program to display contents of an array 

    Author: Casey Edwards Lawrence 

    Date: 23/11/22
*/

#include <stdio.h>

#define SIZE 10

int main ()

{
    int arr[SIZE] = {0};
    int i;


    for(i = 0; i< SIZE; i++)
    {
        arr[i] = (SIZE - 1) - i;

        printf("%d ", arr[i]);
    } // end for 

    printf("\n\n");

    for( i =0; i < SIZE; i++)
    {
        arr[i] = arr [arr[i] ];

        printf("%d ", arr[i]);
    }// end for 
    
    printf("\n\n arr[8] contains : %d ", arr[8]); 

    return 0; 
}