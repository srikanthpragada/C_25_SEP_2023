// Create an array of 10 ints and store random nums
// Date : 13-OCT-2023

#include <stdio.h>

void main()
{
  int a[10], i;

     srand(time(0));
     for(i = 0; i < 10; i ++)
     {
         a[i] =  rand() % 100;
         printf("%d ", a[i]);
     }
}

