/*
Program to demonstrate returning a value from a function (most used character)
Author : Casey Edwards Lawrence 
Date : 10/02/2023
*/

#include <stdio.h>

#define SIZE 3 

char common (char, char, char);

int main()
{
    char char1, char2, char3;
    char my_char;

    printf("Please enter %d characters, the most common out of the %d will be displayed on screen \n\n", SIZE, SIZE );
    scanf("%c", &char1);

    // clear input buffer
    while(getchar() != '\n');

    scanf("%c", &char2);
    
    // clear input buffer
    while(getchar() != '\n');

    scanf("%c", &char3);

    // find the most common character
    my_char = common(char1, char2, char3);

    printf("The most common charater is %c", my_char);

}

// function to find the most commmonly used character from user input 

char common (char c1, char c2, char c3)
{

    if (c1 == c2 || c1 == c3)
    {
        return c1;
    }// end if 
    else if (c2 ==c3 || c2 ==c1 )
    {
        return c2; 
    } // end else if
    else 
    {
        return c3; 
    } // end else 
} // end common 