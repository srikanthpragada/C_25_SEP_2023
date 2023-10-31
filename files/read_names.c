#include <stdio.h>

void main()
{
 FILE * fp;
 int ch;


    fp = fopen("names.txt", "rt"); // read text

    while(1)
    {
        ch = fgetc(fp); // read a char
        if(ch == EOF)
           break;

        putch(ch);
    }

    fclose(fp);
}
