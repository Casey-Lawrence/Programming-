/*
    Program that uses 3 x 2 array. 
    enters values; displays values; finds smallest and largest and displays; calculate average and displays

    Author : Casey Edwards Lawrence

    Date: 23/11/22

*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()

{
    int array[ROW][COL]; 
    int i, j; 
    int high, low; 
    int sum = 0;
    int avg =0;

    printf("Enter %d numbers \n", ROW*COL);

    // enter the data into the array part a 
    for(i = 0; i < ROW; i++)
    {
        //  enter the data into the cols 
        for(j =0; j < COL; j++)
        {
            scanf("%d", &array [i][j]);

        } // end inner for 

    } // end outer for 

    
    // display the data entered in to array part b 
        for(i = 0; i < ROW; i++)
    {
        // inner for handles the cols 
        for(j =0; j < COL; j++)
        {
            // display data
            printf("\nRow %d, Col %d contains %d", i, j, array[i][j]);
        }// end inner for 

        // display next row on new line 
        printf("\n");

    } // end outer for 

    // part c
    high = array[0][0];
    low = array[0][0];

    for(i =0; i<ROW; i++)
    {
        for (j =0; j < COL; j++)
        {
            if(high< array[i][j])
            {
                high = array[i][j];
            } // end if

            if (low > array[i][j])
            {
                low = array[i][j];
            }// end if
        } // end inner for

    } // end outer for 

    printf("\n\n High is %d and low is %d", high , low);

    //part d
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            sum = sum + array[i][j];

        } // end inner for

    } // end outer for

    avg = (float)sum / (ROW * COL);

    printf("\n\nAverage is %.1f", avg);
    
    return 0;

}