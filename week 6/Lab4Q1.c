/*
Program to tell user if input is vowel or consonant 

Author: Casey Edwards Lawrence 

Date: 24/10/22
*/

#include<stdio.h>

int main ()

{
    char var1; 

    printf("Enter a letter");
    while(getchar() != '\n');
    scanf("%c", &var1);

    switch (var1)

    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        {
            printf("The letter you have entered is a vowel");

            break;
        }
        default:
        {
            printf("The letter you have entered is a consonant");

            break;
        }
    }
    


return 0;






}
    

 