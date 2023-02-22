/*
Program that uses a function to find the highest and lowest of 3 numbers
Author: Casey Edwards Lawrence 
Date: 09/02/2023
*/

#include <stdio.h>

#define SIZE 3 

void low_high (int, int, int);

int main()
{
    int i; 
    int num1, num2, num3;


    printf("Enter 3 numbers and the output will display the highest and lowest of these\n\n");
    scanf("%d, %d, %d", &num1, &num2, &num3);

    // clear input buffer
    while(getchar() != '\n');

    // find the highest and lowest of these 3 numbers 
    low_high(num1, num2, num3);
}

void low_high (int num1, int num2, int num3)
{
    int low;
    int high;


    low = num1;
    
    if (num2 < low)
    {
        low = num2;

        if (num3 < low )
        {
            low = num3; 
        }
    }

   high = num1;
    
    if (num2 > high)
    {
        high = num2;
        
        if (num3 > high)
        {
            high = num3; 
        }
    }
    

    printf("The Highest value is %d \n\nThe Lowest value is %d", high, low); 
}