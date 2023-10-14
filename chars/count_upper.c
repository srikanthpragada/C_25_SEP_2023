// Print type of char
// Date : 12-OCT-2023

#include <stdio.h>

void main()
{
  char ch, i , count = 0;

     printf("Enter Chars :");

     for(i = 1; i <= 10; i ++)
     {
        ch = getche();
        if(isupper(ch))
            count ++;

     }

     printf("\nUpper count = %d", count);

}

