/*
Program that will input a positive integer value, and compute the following
sequence:
            if the number is even, halve it
            if the number is odd, multiply by 3 and add 1.
Repeat this process until the value is 1, displaying each value.
Finally it will display how many of these operations you performed

Author : Casey Edwards Lawrence 

Date : 03/11/22

*/

#include <stdio.h>

int main ()

{

    int num ;
    int counter = 0;

    // keep asking user for positive integer 
    do 
    {

        printf("Enter positive integer \n");
        scanf("%d", &num);
    }
    while (num < 1);

    printf("\nThe initial value is %d", num);

    // keep looping while num is not equal to 1 

    do
    {
        /*error message 
        if (num > 1 )
        {
            printf("Error invalid number");
        }*/
        
        // check if even or odd 
        if (num % 2 == 0 )
        {
            num = num / 2;
        }// end if 
        else
        {
            num = num * 3 + 1 ;
        }// end else 
        
        // incrememnt the counter to count number of attempts 
        counter++;

        // check if number not equal to 1 
        if (num != 1)
        {
            printf("\n Next Value is %d", num );
        }// end if 

    } while (num != 1)
        
    
    printf("\nFinal value is %d, number of steps %d",num, counter);

return 0;

}// end main 