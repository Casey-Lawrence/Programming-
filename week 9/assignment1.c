/*
    C program to display automated teller machine (ATM) menu to allow users to manage their personal identification number (PIN) 
        Allow user to input pin and verify correct; change pin; view successfull and unsuccessfull attempts and exit program

    Author : Casey Edwards Lawrence 

    Date: 12/ 11/ 22
    last edit: 20/11/22
*/

#include <stdio.h>

#define SIZE 4

int main()
{
   int pin[SIZE] = {1, 2, 3, 4};
   int user_pin[SIZE]; 
   int temp_pin1[SIZE];
   int temp_pin2[SIZE]; 
   int end , menu; 
   int correct = 0;
   int wrong = 0; 
   int i;
    

    // begin do... while loop 
    do 
    {
        printf("\n\n ATM MENU \n\n 1. Enter pin and verify correct \n\n 2. Change Pin \n\n 3. Display how many times PIN entered (i) correct (ii) incorrect \n\n 4. Exit ATM\n\n");
        printf("****************************************************************\n\n");
        while(getchar() != '\n'); // dont allow characters
        scanf("%d", &menu); 
        
        
        // begin switch statement 
        switch (menu)
        {
            case 1: // if option 1 is selected 
            {
                // user input pin 
                printf("\n\nEnter %d digit pin\n\n", SIZE);
                while(getchar() != '\n');

                for (i = 0 ;i < SIZE; i++)
                {
                    scanf("%d", &user_pin[i]);
                }// end for

                // verify if correct 
                for(i = 0; i < SIZE; i++)
                {
                    if (user_pin[0]== pin[0] && user_pin[1]== pin[1] && user_pin[2]== pin[2] && user_pin[3]== pin[3] )
                    {
                        printf("\n\nCorrect pin entered \n\n");

                        // increment correct counter
                        correct++;
                        break;

                    } // end if 
                    else
                    {
                        printf("\n\nIncorrect pin - try again\n\n"); 

                        // increment wrong counter
                        wrong++;
                        break;
                    }// end else 

                } // end for
                break;  
            } // end case 1 
        
            case 2:
            {
                // user input pin
                printf("\n\nEnter %d digit pin\n\n", SIZE);
                while(getchar() != '\n');

                for (i = 0 ;i < SIZE; i++)
                {
                    scanf("%d", &user_pin[i]);
                } // end for 
                
                //  verify if correct 
                for(i = 0; i < SIZE; i++)
                {
                    if (user_pin[0]== pin[0] && user_pin[1]== pin[1] && user_pin[2]== pin[2] && user_pin[3]== pin[3] )
                    {
                        //  if correct allow user to change pin 
                        printf("\n\nCorrect pin -Enter new %d digit pin(enter after key each number)\n\n", SIZE);
                        while(getchar() != '\n');
                        
                        for (i = 0 ;i < SIZE; i++)
                        {
                            scanf("%d", &temp_pin1[i]);

                        }// end inner for 

                    } // end if 
                    else
                    {
                       printf("\n\nIncorrect pin - try again\n\n"); 
                       break; 
                    }// end else
                    
                    printf("\n\nVerify new %d digit pin(enter key after each number)\n\n", SIZE);
                    while(getchar() != '\n');


                    for(i = 0; i < SIZE; i++)
                    {
                        scanf("%d", &temp_pin2[i]);
                        
                    }// end for 

                    for(i= 0; i < SIZE; i++)
                    {
                        //  if same pin is entered twice ; pin changed 
                        if (temp_pin2[0] == temp_pin1[0] && temp_pin2[1] == temp_pin1[1] && temp_pin2[2] == temp_pin1[2] && temp_pin2[3] == temp_pin1[3])
                        {
                            // copy array elements in to default pin 
                            pin[i] = temp_pin1[i]; 

                            // display new pin
                            printf( "%d ", pin[i]);
                        }// end if 

                        else
                        {
                            printf("\n\nIncorrect pin - try again\n\n"); 
                            break;
                        } // end else 

                    } // end for 
            
                }// end for 
                break;
            }// end case 2  

            case 3:
            {
                printf("\n\nYou have entered your pin\n\n (i) Sucessfully %d times \n\n (ii) Incorrectly %d times", correct, wrong);
                break;

            }
          

            case 4:
            {
                printf("You have selected to end this program \n\n Are you sure? \n\n 1. Yes 2. No ");
                scanf("%d", &end); 

                if (end == 1)
                {
                    printf("\n\nProgram sucessfully ended");
                
                }// end if 
                break;
            } // end case 4

               

        // ensure only numbers 1-4 for menu can be selected and no letters 
        default:
        {
            printf("Invalid selection- try again");
            break;
        } // end default 

    } // end switch 
 

  
    }  // end do while 
        while (end != 1 ); 

    return 0;
} // end main