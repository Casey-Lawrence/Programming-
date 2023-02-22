#include <stdio.h>


int main ()

{
    int default_pin = 1234;
    int user_pin = 0;
    int temp_pin1 =0;
    int temp_pin2 =0;
    int correct =0;
    int wrong =0; 
    int menu = 0;
    int end=0; 

    
    do
    {

    
      printf("\n\n ATM MENU \n\n 1. Enter pin and verify correct \n\n 2. Change Pin \n\n 3. Display how many times PIN entered (i) correct (ii) incorrect \n\n 4. Exit ATM\n\n");
      scanf("%d", &menu); 

      switch (menu)
      {
      case 1:
          {
            printf("\n\nEnter your pin"); 
            while(getchar() != '\n');
            scanf("%d", &user_pin);

            if (user_pin == default_pin)
            {
                printf("Correct pin entered");

                // increment correct counter
                correct ++;
            
            }// end if 
            else
            {
                printf("Wrong pin- try again"); 

                // increment wrong counter
                wrong++;
            }// end else 
              
          }// end case 1
          break;

           default:
            break;
      }// end switch 


    } while (end == 2); 

return 0; 
}