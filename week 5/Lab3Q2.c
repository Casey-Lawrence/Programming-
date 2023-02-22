/*
Program to display characters on users screen 

Author: Casey Edwards Lawrence 

Date: 17/10/2022
*/

#include <stdio.h>

int main ()

{
   char char1= ' ';
   char char2= ' ';



    printf("Enter first single character");

    //    ignore white space chars
    while(getchar() != '\n');

    scanf("%c", &char1);

    printf("Enter second single character");

    //    ignore white space chars
    while(getchar() != '\n');

    scanf("%c", &char2);


    printf("First character %c \n Second character %c", char1, char2);

    return 0;

}