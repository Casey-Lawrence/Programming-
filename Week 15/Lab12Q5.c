/*
Program to demonstrate pass by value with a function
Author : Casey Edwards Lawrence
Date: 10/02/2023
*/

#include <stdio.h>

int fxn1(int);

int main()
{
    int var = 1;
    int i; 

    printf("var = %d\n\n", var);

    // pass a copy of var to function
    // fxn1(var); 

    // call var back to main()
    i = fxn1 (var);

    printf("var is back in main var = %d\n\n", var );
}

// function 1 changes the contents of the parameter 
int fxn1 (int var)
{
    var = var + 2;
    
    printf("Var has been incremented by 2 var = %d\n\n", var); 

    return var; 
}