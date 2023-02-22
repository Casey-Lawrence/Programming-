/*
Program to demonstrate returning a value from a function (highest number)
Author: Casey Edwards Lawrence 
Date: 10/02/2023
*/

#include <stdio.h>

#define SIZE 3 

int highest (int, int, int); 

int main()
{
    int num1, num2, num3; 
    int high; 

    printf("Please enter %d numbers and the highest value will be displayed in screen \n\n", SIZE);
    scanf("%d, %d, %d", &num1, &num2, &num3);

    // get the highest value 
    high = highest (num1, num2, num3); 

    printf("The highest value is %d", high);

    return 0;
}

//  function to find the highest value and return the value to main()
int highest (int n1, int n2, int n3)
{
    int i; 
    
    i = n1; 

    if (n1< n2)
    {
        i = n2;
    }
    if (n2 <n3)
    {
        i = n3;
    }

    return i;
}