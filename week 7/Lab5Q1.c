/*
Program using a while loop to display numbers 1-10 in descending order separated by a comma

Author: Casey Edwards Lawrence 

Date: 03/11/22
*/

#include <stdio.h>

int main ()

{

    int i = 10 ;

// display the value of i from 1-10 
    while (i > 0 )
    {

        if (i != 1)
        {
            printf("%d,", i);

        }// end if 
        else 
        {
            printf("%d", i);

        }// end else 

        // decrement value of i 
        i--;

    }// end while 

return 0;


}// end main 