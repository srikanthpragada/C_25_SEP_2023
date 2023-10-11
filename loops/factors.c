// Print factors
// Date : 10-OCT-2023

#include <stdio.h>

void main()
{
    int num,i;

     printf("Enter number :");
     scanf("%d",&num);

     for(i = 2; i <= num / 2; i ++)
     {
       if(num % i == 0)
          printf("%d ", i);
     }
}

