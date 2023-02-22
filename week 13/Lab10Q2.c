/*
DMA 

this program used calloc() to dynamically allocate a block of memory , enter data into the memory block and
Author: Casey Edwards Lawrence 

Date: 13/12/22
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ptr; 
    int numbers = 0;
    //int no_bytes =0;
    int i; 

    //part 1 
    // How many integers, i.e. data items do you wish to enter
    printf("\n How many integers do you wish to enter? \n");

    scanf("%d", &numbers); 

    // part 2 not needed 
    // calculate the number of bytes required to store numbers in memory 
    // no_bytes = numbers *sizeof(int);

    // part3 
    // allocate the block of memory required
    ptr = calloc(numbers, sizeof(int));

    //part 4 
    // check if allocation was successful
    if (ptr == NULL)
    {
        printf("\n Failed to allocate memory\n"); 
    }// end if
    else // memory allocated successfully
    {
        // part 5 
        // memory alocated successfully - use it 
        printf("\memory allocated successfully\n");

        printf("\n Enter set of %d integers", numbers);

        // enter data into block
        for (i -0; i < numbers; i++)
        {
            scanf("%d", &*(ptr +i));
        } // end for 

        //display numbers 
        printf
    }

}