/*
Program that sorts number in array from smallest to largest
Author: Casey Edwards Lawrence
DAte: 16/11/22
*/

#include <stdio.h>

#define SIZE 3 

int main ()

{   int array1[SIZE] ={0};
    int temp;
    int i;
    int j;


    printf("Enter %d integers", SIZE); 

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);

    }

// ascending order beginning

    printf("Ascending order beigiinning... \n\n");

// bubble sort algorithm 

    for(i = 0; i < SIZE - 1; i++ )
    {
        // last i elements are already in place 
        for(j = 0; j < SIZE - i - 1 ; j++ )
        {
            if (array1[j]> array1[j+1])
            {
                temp = array1[j];
                array1[j] = array1[j + 1];
                array1[j+ 1] = temp;
            }// end if 

        }// end inner for

    } // end outer for 

// display contents of array1 in ascending order 

    for(i = 0; i < SIZE; i++)
    {
        printf("%d  ", array1[i]); 

    }
    return 0; 


}