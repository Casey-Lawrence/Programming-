/*
Program to compare user input to one random generated number between 1 - 10 

Author: Casey Edwards Lawrence 

Date: 07/ 11/ 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()

{
    int num = 0;
    int counter = 1;
    int same = 0;
    int diff = 0;
    int user;
    

    // run program 5 times 
    do
    {
        //  get user input 
        printf("\n\nEnter a number between 1 - 10, to compare to random number:");
        while(getchar() != '\n');
        scanf("%d", &user); 

        printf("Generating a random number between 1 - 10... \n");

        // ensure user can only enter value 1 - 10 
        if (user > 10 )
        {
            if (user < 1)
            {
                printf("Invalid number"); 
            }// end inner if 

        } // end if     


        else
        {
            // seed random number generator with range 0 - large number 
            srand(time(NULL));

            // num is assigned a random number between 1 - 10 
            num = (rand() % 10)+ 1; 


            // check if num == user
            if (user == num)
            {
                printf("\nAttempt %d : Same numbers.", counter);

                // increment same number counter 
                same++;

            }// end if 

            else 
            {
                printf("\nAttempt %d : Different numbers.", counter);

                // increment diff number counter 
                diff++;

            }// end else 

            // display the random number generated 
            printf("\nRandom number was %d .", num);

            // increment counter to run program 5 times 
            counter++;

        } // end else 
        
    }// end do while loop
    while (counter != 6); 

    // display how many times numbers same and different 
    printf("\n\nNumber same %d times \nNumber different %d times", same , diff); 

    return 0; 

} // end main 

