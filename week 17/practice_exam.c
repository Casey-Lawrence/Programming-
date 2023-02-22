/*
Program to convert currencies
Author: Casey Edwards Lawrence
Date: 22/02/23
*/

#include <stdio.h>

#define SIZE 3

float change_to_Euro(float[]); // convert Dollar to euro

float change_to_Dollar(float[]); // convert euro to Dollar 

int main()
{
    float euro_array[SIZE]; 
    float dollar_array[SIZE];
    float eu_avg;
    float dol_avg;
    int curr, i, j = 0;
    
    do
    {
        printf("Please choose a currency \n\n1. Euro\n\n2. Dollar\n\n3. Exit Program\n\n");
        scanf("%d", &curr);

        // switch statement 
        switch(curr)
        {
            case 1:
            {
                printf("Please enter %d amounts to be converted from euro to dollars\n\n", SIZE);
                
                // enter data in to array
                for(i =0; i < SIZE; i++)
                {
                    scanf("%f", &euro_array[i]);

                } // end for

                // call function to return average of amounts
                eu_avg = change_to_Euro(euro_array);

                // display average in main()
                printf("The average of these amounts is %.2f euros", eu_avg);

                break;
            } // end case 1

            case 2:
            {
                printf("Please enter %d amounts to be converted from dollars to euro", SIZE);
                
                // enter data in to array
                for(i =0; i < SIZE; i++)
                {
                    scanf("%f", &dollar_array[i]);

                } // end for

                // call function to return average of amounts
                dol_avg = change_to_Dollar(dollar_array);

                // display average in main()
                printf("The average of these amounts is %.2f dollars", dol_avg);
                break;
            } // end case 2

            case 3:
            {
                printf("You have chosen to exit the program");
                j++;
                break;
            
            } // end case 3

            default:
            {
                printf("Invalid selection");

                break;
            } // end default

        } // end switch
    }
    while (j==0 ); 

    return 0;
} // end main()

float change_to_Euro(float my_array1[])
{
    float avg, sum;  
    int i;

    for(i = 0;i < SIZE; i++ )
    {
        sum = sum + my_array1[i];

    } // end for 

    avg = sum / 3;

    return avg;
} // end change_to_Euro()

float change_to_Dollar(float my_array2[])
{
    float avg, sum;  
    int i;

    for(i = 0;i < SIZE; i++ )
    {
        sum = sum + my_array2[i];

    } // end for 

    avg = sum / 3;

    return avg;
} // end change_to_Dollar()
