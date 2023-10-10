// Print factors
// Date : 10-OCT-2023

#include <stdio.h>

void main()
{
    int num,i;

     printf("Enter number :");
     scanf("%d",&num);

     for(i = 1; i <= num; i ++)
     {
       if(num % i == 0)
          printf("%d ", i);
     }
}

