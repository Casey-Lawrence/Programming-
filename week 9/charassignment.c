#include <stdio.h>

#define SIZE 4

int main()
{
   char pin[SIZE] = {1, 2, 3, 4};
   char user_pin[SIZE]; 
   char temp_pin1[SIZE];
   char temp_pin2[SIZE]; 
   int end; 
   int menu; 
   int correct = 0;
   int wrong = 0; 
   int i;
    

    // begin do... while loop 

    
    do 
    {
        printf("\n\n ATM MENU \n\n 1. Enter pin and verify correct \n\n 2. Change Pin \n\n 3. Display how many times PIN entered (i) correct (ii) incorrect \n\n 4. Exit ATM\n\n");
        printf("****************************************************************\n\n");
        while(getchar() != '\n');
        scanf("%d", &menu); 
        
        
        // begin switch statement 
        switch (menu)
        {
            case '1': // if option 1 is selected 
            {
                // user input pin 
                printf("\n\nEnter %d digit pin\n\n", SIZE);
                while(getchar() != '\n');

                for (i = 0 ;i < SIZE; i++)
                {
                    scanf("%c", &user_pin[i]);
                }// end for

                // verify if correct 
                for(i = 0; i < SIZE; i++)
                {
                    if (user_pin[i]== pin[i])
                    {
                        printf("\n\nCorrect pin entered \n\n ");

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
        
            case '2':
            {
                // user input pin
                printf("\n\nEnter %d digit pin\n\n", SIZE);
                while(getchar() != '\n');

                for (i = 0 ;i < SIZE; i++)
                {
                    scanf("%c", &user_pin[i]);
                } // end for 
                
                //  verify if correct 
                for(i = 0; i < SIZE; i++)
                {
                    if (user_pin[i]== pin[i])
                    {
                        //  if correct allow user to change pin 
                        printf("\n\nCorrect pin -Enter new %d pin\n\n", SIZE);
                        while(getchar() != '\n');
                        
                        for (i = 0 ;i < SIZE; i++)
                        {
                            scanf("%c", &temp_pin1[i]);

                        }// end inner for 
                    } // end if 
                } // end for 

                //  verify new pin 
                printf("\n\nVerify new %d digit pin\n\n", SIZE);
                while(getchar() != '\n');

                for(i = 0; i < SIZE; i++)
                {
                    scanf("%c", &temp_pin2[i]);
                    
                }// end for 

                for(i= 0; i < SIZE; i++)
                {
                    //  if same pin is entered twice ; pin changed 
                    if (temp_pin2[i]== temp_pin1[i])
                    {
                        // copy array elements in to default pin 
                        pin[i] = temp_pin1[i]; 

                        // display new pin
                        printf("%d ", pin[i]);
                    }// end if 

                    else
                    {
                        printf("\n\nIncorrect pin - try again\n\n"); 
                        break;
                    }// end else 
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
        }

    } // endswitch 
 

  
    }  while (end !=2); 

     return 0;
}
