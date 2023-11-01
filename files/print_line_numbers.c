// Print file with line numbers

#include <stdio.h>

void main()
{
 FILE * fp;
 char filename[50], line[100];
 char * p;
 int lineno = 1;

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
         p = fgets(line, 100, fp); // read a line
         if(p == NULL)
            break;

         printf("%3d: %s", lineno, line);
         lineno ++;
    }

    fclose(fp);
}
