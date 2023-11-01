// Count uppercase, lowercase and digits

#include <stdio.h>

void main()
{
 FILE * fp;
 char filename[50];
 int ch, upper = 0, lower = 0, digit = 0;


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

        if(isupper(ch))
              upper ++;
        else
            if(islower(ch))
               lower ++;
            else
                if(isdigit(ch))
                    digit ++;
    }

    fclose(fp);

    printf("Upper = %d, Lower = %d, Digits = %d", upper, lower, digit);
}
