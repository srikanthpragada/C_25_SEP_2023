// Print sum of numbers from 1 to given number
// Date : 10-OCT-2023

#include <stdio.h>

void main()
{
    int i, num, total = 0;

     printf("Enter number :");
     scanf("%d",&num);


     for(i = 1; i <= num; i ++)
     {
        total = total + i;
     }

     printf("Total = %d", total);
}

