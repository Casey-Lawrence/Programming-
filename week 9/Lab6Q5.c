/*
Program to output contents of char array

Author: Casey Edwards Lawrence 

Date: 16/11/22
*/

#include <stdio.h>

#define SIZE 5

int main ()
{
    char array1[SIZE];
    int i;

    printf("Enter %d letters", SIZE); 

    for(i = 0; i < SIZE; i++)
    {
        scanf("%c", &array1[i]); 
    }

    printf("You entered ... \n\n");

// output results
    for (i=0; i < SIZE; i++)
    {
        printf("%c", array1[i]);
    }

    return 0;

}