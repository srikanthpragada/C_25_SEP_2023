// create a function to print a string in reverse

#include <stdio.h>

void main()
{
   print_reverse("Hello");
}


void print_reverse(char s[30])
{
 int i;

    for(i = strlen(s)-1; i >= 0; i--)
         putch(s[i]);
}
