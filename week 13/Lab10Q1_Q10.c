/*
Program that replaces all the blank elements in the array with an _

Author: Casey Lawrence

Date: 13/12/22
*/

#include <stdio.h>

#define SIZE 8

int main ()
{
    char chars[SIZE] = {'a', ' ', 'b', ' ', 'c',' ', ' ', 'd'};
    int i;

    //array_name[i] =*(array_name + i)

    // replace blank characters with an underscore
    for(i = 0; i < SIZE; i++)
    {
        // check if current element is a blank character
        if (*(chars + i) == ' ')
        {
            *(chars + i) = '_';

        } // end if 


    } // end for 

    // print array
    for(i = 0; i < SIZE; i++)
    {
        printf("%c ", *(chars + i)); 
    } // end for 

    return 0;
} // end main