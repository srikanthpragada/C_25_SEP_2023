// Print type of char
// Date : 14-OCT-2023

#include <stdio.h>

void main()
{
  char ch, i, upper = 0, digit = 0;

     printf("Enter Password :");

     for(i = 1; i <= 8; i ++)
     {
        ch = getch();
        putch('*');

        if(isupper(ch))
            upper = 1;
        else
            if(isdigit(ch))
                digit = 1;
     }

     if(upper && digit)
        printf("\nValid Password!");
     else
        printf("\nInvalid Password");

}

