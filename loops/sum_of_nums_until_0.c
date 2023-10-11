// Take nums until 0 is given and display sum of nums
// Date : 11-OCT-2023

#include <stdio.h>

void main()
{
    int num, total = 0;

    while(1)
    {
      printf("Enter number[0 to stop] :");
      scanf("%d",&num);

      if(num == 0)
        break;

      if(num < 0)
         continue;

      total += num;
    }

    printf("Total = %d", total);

}

