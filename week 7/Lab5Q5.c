/*
Program to print all even numbers from 1-100

Author: Casey Edwards Lawrence 

Date : 06/11/22
*/

#include <stdio.h>

int main ()

{
    int i; 


    for(i = 1; i < 101 ; i++)
    {

        if (i ==100)
        {

            printf("%d",i);
        
        }// end if 

        else if((i%2)==0)
        {
            
             printf("%d,",i);
            
        }// end else if 

    }// end for

return 0;

}// end main 