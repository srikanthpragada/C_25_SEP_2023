// Print 1 to 5 in each line
// Date : 12-OCT-2023

#include <stdio.h>

void main()
{
  int i,j;


      for(i = 1; i <= 5; i ++)
      {
        for(j = 1; j <= 5; j ++)
        {
            printf("%d ", i);
        } // j loop
        printf("\n");
      } // i loop

}

