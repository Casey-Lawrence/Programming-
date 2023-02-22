/*
Program that prints values from one to ten

Author: Casey Edwards Lawrence 
Date : 05/11/22
*/

#include <stdio.h>

int main ()

{

    int i;


    //display the numbers 1 - 10 
    for(i = 1; i < 11; i++)
    {
        if(i==3 )
        {
        //display message if i = 3 
        printf("\nThis number is 3");
        }

        if(i==7)
        {
        // display message if i = 7
        printf("\nThis number is 7");
        }
        else
        {
            printf("\n%d", i);
        }

    }

return 0;

}