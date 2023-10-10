// Print sum of 5 numbers
// Date : 10-OCT-2023

#include <stdio.h>

void main()
{
    int i, num, total = 0;


     for(i = 1; i <= 5; i ++)
     {
        printf("Enter number :");
        scanf("%d",&num);

        total += num;
     }

     printf("Total = %d", total);
}

