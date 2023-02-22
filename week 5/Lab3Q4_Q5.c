/*
Program to calculate the number of approximate beats the users heart has made 

Author: Casey Edwards Lawrence 

Date: 17/10/2022

*/

#include<stdio.h>
 
int main ()

{
    int hr = 75 ; 
    int age ;
    int min;
    int hb; 


    printf("Enter your age");
    scanf("%d", &age);


 // find amount of mins in a year
    min = 60*60 *24 * 365 ;


 // find amount of heartbeats in lifetime 

    hb = hr * min *age;

    printf("Your heart has beat %d , times", hb );
    return 0; 


}
