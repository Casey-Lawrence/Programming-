/*
Rewriting if else to switch statement 

Author: Casey Edwards Lawrence 

Date: 24/10/22
*/

#include <stdio.h>

int main ()

{

    char my_char;

    printf("Enter marriage status- S- Single, M- Married, W- widdowed, E- separated, D - divorced");
    while(getchar() != '\n');
    scanf("%c", &my_char);

    switch (my_char)
    
    {
    case 'S':
    case 's':
        printf("Single ");
        break;

    case 'M':
    case 'm':
        printf("Married");
        break;

    case 'W':
    case 'w':
        printf("Widdowed");
        break;
    
    case 'E':
    case 'e':
        printf("Separated");
        break;

    case 'D':
    case 'd':
        printf("Divorced");
        break;

    default:
        printf(" error : invalid");
        break;
    }

return 0;


}