/*
Program that uses 2 functions to calculate area of various shapes
Author: Casey Edwards Lawrence
Date: 20/02/2023
*/

#include <stdio.h>

// fxn signatures
int squareArea (int *);
float circleArea (int *); 

int main()
{
    int length = 0;
    int sq_area = 0;
    int radius = 0; 
    float cir_area =0; 


    printf("Please enter the length of the side of a square\n");
    scanf("%d", & length);

    // calculate square area 
    sq_area = squareArea(&length);

    // display sq area
    printf("\nThe area of the square is %d cm sq", sq_area);

    printf("\n\nEnter the radius of the circle\n");
    scanf("%d", &radius); 

    // calculate circle area 
    cir_area = circleArea (& radius);
    
    // display circ area 
    printf("Area of circle is %.2f cm sq", cir_area);
    
return 0;
}

int squareArea (int *ptr)
{
    int area =0; 

    area = (*ptr) * (*ptr); 

    return area; 
} // end squareArea()

float circleArea (int *ptr)
{
    float area = 0; 

    area = 3.14 *((*ptr) * (*ptr));

    return area;
} // end circleArea()


