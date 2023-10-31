#include <stdio.h>

void main()
{
 FILE * fp;
 char filename[50];
 int ch;


    printf("Enter filename :");
    gets(filename);

    fp = fopen(filename, "rt"); // read text

    if(fp == NULL)
    {
        printf("Sorry! File cannot be found!");
        exit(1); // terminate program with error
    }

    while(1)
    {
        ch = fgetc(fp); // read a char
        if(ch == EOF)
           break;

        putch(ch);
    }

    fclose(fp);
}
