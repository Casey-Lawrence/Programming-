/*
Test program 

Author: Casey Edwards Lawrence

Date: 04/12/22
*/

#include <stdio.h>

int main()
{
    int var1;
    int *ptr; 

    var1 = 1;
    ptr = &var1;

    printf("The address of var1 is %p\n", var1);
    printf("ptr contains %p\n", &ptr); 

    printf("ptr contains %d\n", *ptr);

    return 0; 
} // end main 