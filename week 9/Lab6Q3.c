/*
Program to allow user to enter 4 numbers in array , and swap 2nd with 1st and 3rd with 4th 

Author : Casey Edwards Lawrence 

Date : 14/11/22

*/

#include <stdio.h>

#define SIZE 4 

int main ()

{
    int list1 [SIZE];
    int var1 = 0;
    int i;


    printf("Enter %d integers", SIZE);

    for(i = 0 ; i < SIZE ; i++)
    {
        scanf("%d", &list1[i]);
    }

    printf("Swapping process beginning ...\n\n");

// swap numbers  1 and 2 

    var1 = list1[0];
    list1[0]= list1[1];
    list1[1] = var1;

//  swap numbers 3 and 4 

    var1 = list1[2];
    list1[2] = list1[3];
    list1[3] = var1; 

    for(i = 0; i < SIZE ; i++)
    {

    printf("%d\n", list1[i]);
    }



return 0;




}