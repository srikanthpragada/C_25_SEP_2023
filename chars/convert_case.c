// Convert case
// Date : 13-OCT-2023

#include <stdio.h>

void main()
{
  char ch, i , count = 0;

     printf("Enter Chars :");

     for(i = 1; i <= 10; i ++)
     {
        ch = getch();
        if(islower(ch))
            ch = toupper(ch);

        putch(ch);
     }
}

