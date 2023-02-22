/*
Program to allow user to input 3 temperatures in Fahrenheit
    and display the temperatures and the corresponding values in celcius 
Author : Casey Edwards Lawrence 
Date : 14/11/22

*/

#include <stdio.h>

#define SIZE 3

int main ()

{
    int temp_f [SIZE];
    int temp_c [SIZE];
    int i;

    printf("Enter %d temperatures in fahrenheit", SIZE);

    for(i= 0; i < SIZE ; i++)
    {

        scanf("%d", &temp_f[i]);
        temp_c[i] = ( (temp_f[i] )-32.0 ) * (5.0 / 9.0 ); 



    }

    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nTemperature %d \nfahrenheit = %d celcius = %d", i+1, temp_f[i] , temp_c[i]);
    }

    return 0;

}
