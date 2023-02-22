/*
Program to input two 1-D arrays each having 5 elements and displaying the product of each corresponding element

Author: Casey Edwards Lawrence 

Date: 30/11/22

*/
#include <stdio.h>

#define SIZE 5 

int main ()

{
    int array1[SIZE] = {0};
    int array2[SIZE] = {0};
    int i;

    // enter numbers in to each array 
    printf("Enter %d numbers for array1\n", SIZE); 

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);

    } // end for 

    printf("Enter %d numbers for array2\n", SIZE); 

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array2[i]);

    } // end for 

    //  multiply each corresponding element 
    printf("\n\nMultiply each corresponding element and display the result\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("Element %d * element %d = %d\n", i , i, array1[i] * array2[i]); 
    }// end for

return 0;
}