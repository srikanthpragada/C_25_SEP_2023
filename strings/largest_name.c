// Take  5 names and the largest
// Date : 17-OCT-2023

#include <stdio.h>

void main()
{
  char name[30], largest[30] = "";
  int i;

     for(i = 1; i <= 5; i ++)
     {
         printf("Enter name :");
         gets(name);

         if(strcmp(name, largest) > 0)
             strcpy(largest, name);
     }

     printf("Largest name = %s", largest);


}

