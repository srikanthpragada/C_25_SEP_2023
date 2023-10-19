// create a function to print a string without spaces

#include <stdio.h>

void main()
{
   nospaces("How   are   you?");
}


void nospaces(char s[30])
{
 int i;

    for(i = 0; s[i] != '\0'; i++)
        if(!isspace(s[i]))
            putch(s[i]);
}
