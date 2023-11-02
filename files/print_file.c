// Print a file taken from command-line and display it with line numbers

#include <stdio.h>

void main(int argc, char * argv[])
{
 FILE * fp;
 char line[100];
 char * p;
 int lineno = 1;

    if(argc < 2) // filename is missing
    {
        printf("Sorry! Filename is missing!");
        exit(2);
    }

    fp = fopen(argv[1], "rt"); // read text

    if(fp == NULL)
    {
        printf("Sorry! File <%s> cannot be found!", argv[1]);
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
