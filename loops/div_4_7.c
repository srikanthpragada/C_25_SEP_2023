// Print  nums divisible by 4 or 7 between 1 to 100
// Date : 09-OCT-2023

#include <stdio.h>

void main()
{
    int i;

     for(i = 7; i <= 100; i ++)
     {
       if(i % 4 == 0 && i % 7 == 0)
            printf("%d ", i);
     }

}

