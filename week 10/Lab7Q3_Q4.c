/*
Program to read in 15 numbers and display them as 
    a) each on separate line
    b) one one line each separated by a space 
    c) in reverse order 

Author: Casey Edwards Lawrence 

Date: 30/11/22
*/

#include <stdio.h>

#define SIZE 15

int main ()

{
    int my_array[SIZE] = {0}; 
    int i;

    // enter 15 numbers in to array
    printf("Please enter %d numbers\n", SIZE); 

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &my_array[i]);
    }// end for 


    // part a displaying numbers 
    printf("Displaying numbers on separate lines\n"); 

    for(i = 0; i < SIZE; i++)
    {
        printf("%d \n", my_array[i]);
    } // end for 

    // part b display numbers separated by a space 
    printf("Displaying numbers separated by a space \n"); 

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", my_array[i]);
    }// end for 

    // part c display numbers separated by a space in reverse order 

    printf("\nDisplaying numbers in reverse order separated by a space \n");
    for(i = SIZE - 1; i > -1; i--)
    {
        printf("%d ", my_array[i]);
    }// end for

    printf("\n\n"); 
    return 0;
}