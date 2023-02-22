/*
Program to find the sum of all odd integers in range of 1-99
Author: Casey Edwards Lawrence 
Date: 07/11/22
*/

#include <stdio.h>

int main ()

{
    int i = 1;
    int sum = 0;

    do
    {
        sum = sum + i;

        i = i + 2;

    } while (i < 100);
    
    printf("%d\n", sum);

return 0;
}