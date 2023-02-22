/*

Author: Casey Edwards Lawrence

Date: 13/12/22
*/

#include <stdio.h>

int main()
{
    int num1 = 1;
    char char1 = 'c';
    int *ptr1; 
    char *ptr2;

    ptr1 = &num1; 
    ptr2 = &char1; 

    // part a 
    printf("Num1 contains %d this is stored at address %p \n", num1, &num1 );
    printf("Char1 contains %c this is stored at address %p \n", char1 &char1);

}