/*
Program that performs various operations on a 3 x 4 array

Author : Casey Edwards Lawrence 

Date : 01/12/2022
*/
#include <stdio.h>

#define ROW 3
#define COL 4 

int main ()

{
    int array1[ROW][COL] =  {
                                1, 2, 3, 4,
                                5, 6, 7, 8, 
                                9, 10, 11, 12
                            };

    int array2[ROW][COL] =  { 
                                12, 11, 10, 9,
                                8, 7, 6, 5, 
                                4, 3, 2, 1
                            };
    
    int array3[ROW][COL] = {0};
    
    int i, j;

    // multiply each corresponding element and display in array3 

    printf("Array 3 contains the products of each corresponding element in Array1 and Array 2\n\n");

    for(i = 0; i < ROW; i++)
    {
        for(j =0; j < ROW; j++)
        {
            array3[i][j] = array1[i][j] * array2[i][j];
            
            //display each element of array 3 
            printf("%d ", array3[i][j]); 

        }// end inner for 

    } // end outer for 

    return 0; 
} // end main