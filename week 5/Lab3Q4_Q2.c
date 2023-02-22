/*
Scan f exercises 

Author: Casey Edwards Lawrence 

Date: 17/10/2022
*/
#include <stdio.h>

int main()

{

    int first ;
    int second, third, fourth ;
    float principal, rate, time;
    char keyval1, keyval2 ;
    char c;
    int i;
    float f;
    double d; 


// part a 
 
    printf("Enter a whole number");
    scanf("%d", &first); 

    printf("You entered %d", first);

//  part b 
    printf("\n Enter 3 whole numbers");
    scanf("%d, %d, %d,", &second , &third, &fourth);

    printf("You entered %d,%d,%d", second, third, fourth);

// part c
     printf("\n Enter 3 decimal numbers");
     scanf("%f, %f, %f", &principal , &rate, &time);

    printf("\n You entered %f,%f,%f",principal, rate, time);

// part d 
    printf("\nEnter Two random characters");
    scanf("%c , %c", &keyval1 , &keyval2);
    
    printf("\n You entered %c and %c", keyval1, keyval2);

// part e 
    printf("\n Enter a character, an integer, a float and a double ");
    scanf("%c , %d , %f , %lf", &c, &i , &f, &d);

    printf("\n You entered %c, %d, %f and %lf", c,i,f,d);
    
    
    return 0;
    

}