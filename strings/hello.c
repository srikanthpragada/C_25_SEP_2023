// Take name and say hello
// Date : 16-OCT-2023

#include <stdio.h>

void main()
{
  char name[30];

      printf("Enter name :");
      //scanf("%s", name);
      gets(name);

      printf("Hello %s", name);
}

