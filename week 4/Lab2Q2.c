/*
	Program to calculate the volume and surface area
    of a box 
	Author: Casey Edwards Lawrence 
	Date: 10/10/2022
	*/

#include <stdio.h>

int main()
{
    /*
    h is height
    l is length 
    w is width
    */

    float h = 10.0;
    float l = 11.5;
    float w = 2.5;
    float volume;
    float SurfaceArea;


 //part one - calculate volume 

     volume = h * l * w;

    printf("volume of the box %f",volume);

//part two 

    SurfaceArea = 2 * ( l * w + l * h + w * h );

    printf("\n Surface Area of the box %f",SurfaceArea);

return 0;
    













}