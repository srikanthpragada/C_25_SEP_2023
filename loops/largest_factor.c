// Print largest factor of the given number
// Date : 12-OCT-2023

#include <stdio.h>

void main()
{
    int num,i;

     printf("Enter number :");
     scanf("%d",&num);

     for(i = num/2; i >= 1; i --)
     {
       if(num % i == 0) {
          printf("%d ", i);
          break;
       }
     }
}

