/*
Program to convert temperatures 
Author: Casey Edwards Lawrence
Date: 22/02/23
*/

#include <stdio.h>

#define SIZE 5

float convert_temp(float[]);

float in_Kelvin(float);

int main()
{
    float celcius[SIZE]= {30, 25, 22, 98, 66};
    float average =0;
    float kelvin;

    // calculate average temperature
    average = convert_temp(celcius);

    // output average in celcius to standard output
    printf("The average temperature is %.2f celcius\n\n", average); 

    // convert to kelvin
    kelvin = in_Kelvin(average);

    // output average in kelvin to standard output
    printf("The average temperature is %.2f kelvin\n\n", kelvin); 

return 0;
} // end main()

// convert temperature from celcius to fahrenheit and display avg in main()
float convert_temp(float celcius[])
{
    float fahren[SIZE]; 
    float sum = 0;
    float avg = 0;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        // convert temperature from celcuis to fahrenheit 
        fahren[i]= ((celcius[i] * 9) / 5) + 32;

        // display temperature in celcuis and fahrenheit
        printf("Celcuis = %.2f, Fahrenheit= %.2f\n\n", celcius[i], fahren[i]);

        // calculate sum of temperatures
        sum = sum + celcius[i];

    } // end for
    // calculate average 
    avg = sum / SIZE;

    return avg;
} // end convert_temp()

// convert from celcius to kelvin
float in_Kelvin(float average)
{
    float k;

    k = average + 273;

    return k;
} // end in_Kelvin()