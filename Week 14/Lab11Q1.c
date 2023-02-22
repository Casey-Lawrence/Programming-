/*
Program to use a function to print 10 stars
Author : Casey Edwards Lawrence 
Date : 09/02/2023
*/

#include <stdio.h>

#define SIZE 10 

void stars (int);

int main()
{
    int no_stars = SIZE;
    // execute function stars 
    stars(no_stars);

    return 0;
} // end main()

// function stars used to display a set of asterix 

void stars (int num)
{
    int i;
    for (i=0; i< num; i++)
    {
        printf("*");
    }// end for 

} // end stars()