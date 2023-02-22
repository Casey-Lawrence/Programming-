/*
Program that uses a 3x2 array for various operations 

Author: Casey Edwards Lawrence

Date: 01/12/2022
*/
#include <stdio.h>

#define ROW 3 
#define COL 2

int main ()

{
    int array[ROW][COL] = {0};

    int row_sum[ROW] = {0};
    int col_sum[COL] = {0};

    int high = 0;
    int sum = 0; 
    int i, j;

    // part a 
    printf("Please enter %d numbers in to the array\n\n", ROW*COL); 

    for(i =0; i < ROW; i++)
    {
        for(j =0; j< COL; j++)
        {
            scanf("%d", &array[i][j]);

        }// end inner for
    } // end outer for
    
    // part b
    for(i =0; i< ROW; i++)
    {
        for(j =0; j< COL; j++)
        {
            if (i == 0)
            {
                row_sum[i] = row_sum[i] + array[i][j];
            }
            if (i == 1)
            {
                row_sum[i] = row_sum[i] + array[i][j];
            }
            if (i == 2)
            {
                row_sum[i] = row_sum[i] + array[i][j];
            }

        }// end inner for

    } // end outer for

    // display the sum of the rows separately 
    for(i =0; i < ROW; i++)
    {
        printf("The sum of row %d is %d\n", i, row_sum[i]);
    }

    // part c
    for(i =0; i< ROW; i++)
    {
        for(j =0; j< COL; j++)
        {
            if (j == 0)
            {
                col_sum[i] = col_sum[i] + array[i][j];
            }
            if (j == 1)
            {
                col_sum[i] = col_sum[i] + array[i][j];
            }
            if (j == 2)
            {
                col_sum[i] = col_sum[i] + array[i][j];
            }

        }// end inner for

    } // end outer for

    // display the sum of the cols separately 
    for(i =0; i < COL; i++)
    {
        printf("The sum of col %d is %d\n", i, col_sum[i]);
    }

    // find the highest element in the array 
    // assume highest is array[0][0]
    high = array[0][0]; 

    // find highest value in the array
    for(i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (high < array[i][j])
            {
                high = array[i][j]
            }
        } // end inner for 

    } // end outer for 

    printf("The highest value in the array is %d", high); 

    return 0;
}// end main 