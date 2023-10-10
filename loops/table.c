// Print  table for the given number
// Date : 10-OCT-2023

#include <stdio.h>

void main()
{
    int i, num;

     printf("Enter number :");
     scanf("%d",&num);


     for(i = 1; i <= 20; i ++)
     {
        printf("%3d * %2d = %5d\n", num, i, num * i);
     }

}

