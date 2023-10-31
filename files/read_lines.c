// Program to display a file by reading it line by line
#include <stdio.h>

void main()
{
 FILE * fp;
 char filename[50], line[100];
 int ch;
 char * cp;


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
        cp = fgets(line, 100, fp);
        if (cp == NULL)  // EOF
             break;

        printf("%s", line);
    }

    fclose(fp);
}
