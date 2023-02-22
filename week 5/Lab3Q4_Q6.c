/*
Program to convert fahrenheit to celcius 

Author: Casey Edwards Lawrence 

Date: 17/10/2022

*/

#include <stdio.h>

int main ()

{

    float fahrenheit ; 
    int celcius ; 

    printf("Enter a temperature in fahrenheit :");
    scanf("%f", &fahrenheit); 

    celcius = ((fahrenheit - 32.0) * (5.0/9.0)); 
    scanf("%d", &celcius );

    printf ("You entered %f this is %d in celcius", fahrenheit, celcius); 

    return 0; 


}