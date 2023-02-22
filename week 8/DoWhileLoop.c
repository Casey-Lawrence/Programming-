#include <stdio.h>
int main()

{
    float num = 1;
    float total = 0;


    // this do loop will execute at least once
    do
    {
        printf("\nEnter a number (enter 0 to end program)\n");
        scanf("%f", &num);

        // if the user enters zero
        if (num == 0)
            {
            printf("\nBye bye");
            break;
            } // end if
            
        /* Add the number entered to the current value in total.
        This is the new total
        */
        total = total + num;
    } // end do
    // while the number entered is not equal to zero
    while (num != 0);
    // Display the final total
    printf("\nThe final total is %.1f", total);
return 0;
} // end main