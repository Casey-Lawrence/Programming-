/*
Program that uses a function to check if numbers in an array are even or odd
Author: Casey Edwards Lawrence
Date: 22/02/23
*/

#include <stdio.h>

#define SIZE 5

int evenOdd(int[]);

int main ()
{
    int my_array[SIZE];
    int even_num = 0;
    int i;

    printf("Please enter %d numbers\n\n", SIZE);

    // enter data in to array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", & my_array[i]);
    } // end for 

    // function check how many even 
    even_num = evenOdd(my_array); 

    printf("%d even numbers were entered\n\n",even_num);

    return 0;
}

int evenOdd(int num_array[])
{
    int i;
    int even = 0;
    int odd = 0; 

    for(i=0; i < SIZE; i++)
    {
        if ((num_array[i] % 2)== 0)
        {
            printf("%d is even\n\n", num_array[i]);

            even++;
        }// end if 
        else 
        {
            printf("%d is odd\n\n", num_array[i]);
            odd++;
        }// end else 

    }// end for loop 
    
    return even;
}
