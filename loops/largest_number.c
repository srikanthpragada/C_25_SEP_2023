// Print largest number
// Date : 12-OCT-2023

#include <stdio.h>

void main()
{
  int num, largest = 0;

     while(1)
     {
        printf("Enter number [0 to stop]:");
        scanf("%d",&num);

        if(num == 0)
             break;

        if(num > largest)
            largest = num;
     }

     printf("Largest = %d", largest);
}

