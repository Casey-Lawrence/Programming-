/*



*/

#include <stdio.h>

int main()
{

    char oper;
    float num1, num2, answer;

    printf("Enter a simple mathematic equation \n");
    scanf("%f", &num1);
    scanf("%c", &oper);
    scanf("%f", &num2);

    // now use switch statement 
    switch (oper) // only works with char and int 
    {
        case '+': // if (oper == '+')
        {
            answer = num1 + num2;
            printf("\n%.1f PLUS %.1f is %.1f", num1, num2, answer);
            break; //stops switch statement

        }//end case '+'
         
        case '-': // if (oper == '-')
        {
            answer = num1 - num2;
            printf("\n%.1f MINUS %.1f is %.1f", num1, num2, answer);
            break;

        }// End case '-'

        case '*':
        case 'x':
        case 'X': // if (oper == '*')
        {
            answer = num1 * num2;
            printf("\n%.1f MULTIPLY %.1f is %.1f", num1, num2, answer);
            break;

        }// end case'*'

        case '/': // if (oper == '/')
        {
            answer = num1 / num2;
            printf("\n%.1f DIVIDE %.1f is %.1f", num1, num2, answer);
            break;
        } // end case '/'

        default:
        {
            printf("");
        }


    }












}