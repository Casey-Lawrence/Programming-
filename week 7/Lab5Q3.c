/*
Program that reads in a number between 1-5 and displays all numbers between 1-20 
that are evenly divisable by this number 

Author: Casey Edwards Lawrence 

Date: 03/11/22
*/

#include <stdio.h>

int main ()

{

    int i ;
    int user; 

// ask user for input
    printf("Enter a number between 1-5 ");
    scanf("%d", &user);

// if user input larger than 5, error message 
    if(user > 5)
    {
        printf("Error , invalid number");
    }// end if 

// if user less than or equal to print values 
    if(user <= 5 )
    {

    for(i = 1; i < 21 ; i++)

        {
// if evenly divisable print numbers 
        if ((i % user ) == 0)
            {

            printf("%d,",i);
        
            }// end if 
    

        }// end for

    }// end if 
return 0;


}