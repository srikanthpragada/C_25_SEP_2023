// Create an array of 10 ints
// Date : 13-OCT-2023

#include <stdio.h>

void main()
{
  int a[10], i;

     for(i = 0; i < 10; i ++)
     {
         a[i] = i * i;
         printf("%d ", a[i]);
     }
}

