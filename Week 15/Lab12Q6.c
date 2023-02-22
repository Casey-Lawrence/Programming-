/*
Program to demonstrate the use of pass by reference with a function
Author : Casey Edwards Lawrence 
Date : 10/02/2023
*/

#include <stdio.h>

int fxn1 (int *);

int main()
{
    int var = 1; 

    printf("Var is in main() var contains %d\n\n", var);

    // pass the address of var to fxn1
    var = fxn1 (&var);


    printf("Var is back in main() var now contains %d\n\n", var);
}// end main()

// function to increment variable and return value to main()
int fxn1(int *var)
{
    printf("var is in fxn var contains = %d\n\n", *var);

    // increment var
    *var = (*var)+2;

    printf("Var contains %d after being incremented \n\n", *var); 

    return *var; 
}