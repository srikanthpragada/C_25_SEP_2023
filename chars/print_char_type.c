// Print type of char
// Date : 12-OCT-2023

#include <stdio.h>

void main()
{
  char ch;

     printf("Enter Alpha :");
     //scanf("%c",&ch);
     ch = getch();

     printf("\n%d %c\n", ch, ch);

     if(ch >= 65 && ch <= 90)
        printf("Uppercase");
     else
        printf("Non uppercase");
}

