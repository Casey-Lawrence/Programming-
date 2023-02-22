/*
	Program to display 3 numbers on separate lines 
    
	Author: Casey Edwards Lawrence 
	Date: 17/10/2022
*/


#include <stdio.h>

int main ()

{
    // declare variables 
    int num1; 
    int num2; 
    int num3;

// ask user to enter 3 separate numbers 
    printf("Enter first number \n");
    scanf("%d", &num1);

    printf("Enter second number\n");
    scanf("%d", &num2);

    printf("Enter third number\n");
    scanf("%d", &num3);

// Print 3 numbers on users screen 

    printf("\n%d\n%d\n%d", num1, num2, num3);
    
    return 0;

}