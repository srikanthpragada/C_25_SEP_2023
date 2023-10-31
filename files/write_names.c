#include <stdio.h>


void main()
{
 FILE * fp;
 char * names [] = {"Bill", "Scott", "Steve", "James", "Alice"};
 int i;


    fp = fopen("names.txt", "wt"); // write text

    for(i = 0; i < 5; i ++)
    {
       fprintf(fp, "%s\n", names[i]);
    }

    fclose(fp);
}
