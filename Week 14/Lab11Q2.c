/*
Program with a function that has to pass 2 parameters 
Author: Casey Edwards lawrence 
Date: 09/02/2023
*/

#include <stdio.h>

#define SIZE 5 

void test_function (char, int);

int main()
{
    int no_chars = 0;
    char my_char;

    printf("How many charcters to display?\n\n");
    scanf("%d", &no_chars);

    // clear input buffer
    while(getchar() != '\n');

    printf("Which character to display?\n\n");
    scanf("%c", &my_char);

    // execute function
    test_function(my_char, no_chars);

    return 0;
}// end main 

// function test_function() used to dispaly a number of characters 
void test_function (char ch, int num)
{
    int i;
    
    for(i = 0; i< num; i++)
    {
        printf("%c", ch);
    }// end for  

}// end test_funcion 