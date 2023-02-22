/*
Program to check if var one can be divivded by var 2 

Author : Casey Lawrence 

Date : 24/10/22
*/

#include <stdio.h>

int main ()

{
    int var1;
    int var2;
    int var3;

    printf("Enter 2 positive integers");
    while(getchar() != '\n');
    scanf("%d, %d", &var1, &var2);

    var3 = var1%var2; 

    if (var3 == 0)
    {
        printf("Number 1 is evenly divisable by Number 2");
    }

    if (var3 != 0)
    {
        printf("Number 1 is not evenly divisable by Number 2");
    }

return 0;
}
