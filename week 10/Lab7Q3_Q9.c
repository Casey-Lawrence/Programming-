/*
2-D array , searches for values less than 0, and displays these with the corresponding row and column

Author: Casey Edwards Lawrence 

Date: 30/11/22

*/

#include <stdio.h>

#define ROW 4 
#define COL 5

int main()
{
    int my_array[ROW][COL] = {0};
    int i, j;

    // enter data in to array 
    printf("Enter %d numbers in to the array\n", ROW*COL);

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &my_array[i][j]);

        }// end inner for 
    } // end outer for

    // check for values less than 0 
    printf("\n\nChecking for values less than 0\n"); 

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            if(my_array[i][j] < 0)
            {
            printf(" Row %d, Col %d is less than 0 , contains %d",i, j, my_array[i][j]);
            } // end if 
            else
            {
                printf("\n\nNo values less than 0");
            }

        }// end inner for 
    } // end outer for

    return 0; 
}