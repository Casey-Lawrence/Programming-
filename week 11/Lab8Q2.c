/*
program that computes the sum of all the elements in the array

Author: Casey Edwards Lawrence

Date : 01/12/2022
*/

#include <stdio.h>

#define ROW 4
#define COL 6

int main ()
{
    int data [ROW][COL] =   {
                                {3, 2, 5, 7, 4, 2}, 
                                {1, 4, 4, 8, 13, 1}, 
                                {9, 1, 0, 2 },
                                {0, 2, 6, 3, -1, -8}
                            }; 
    int i, j; 
    int sum = 0; 

    // sum of elements in array 
    for(i =0; i < ROW; i++)
    {
        for(j =0; j < COL; j++)
        {
            sum = sum + data[i][j]; 

        } // end inner for 

    } // end outer for 

    // display the sum of numbers 
    printf("sum of data = %d ", sum); 

}