// Take a string and invert case of chars
// Date : 17-OCT-2023

#include <stdio.h>

void main()
{
  char st[100];
  int i;

      printf("Enter string :");
      gets(st);

      for(i = 0; st[i] != '\0' ; i ++)
      {
          if(isupper(st[i]))
              st[i] = tolower(st[i]);
          else
              st[i] = toupper(st[i]);

      }

      printf("Inverted string : %s", st);

}

