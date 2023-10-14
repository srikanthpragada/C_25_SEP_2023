// Strong Number
// Date : 13-OCT-2023

#include <stdio.h>

void main()
{
    int num, org_num, digit, i, fact, total = 0;

     printf("Enter number :");
     scanf("%d",&num);

     org_num = num;

     while(num > 0)
     {
         digit = num % 10;

         fact = 1;
         for(i = 1; i <= digit; i ++)
            fact = fact * i;

         total += fact;

         num  = num / 10;
     }

     if(org_num == total)
         printf("Strong Number!");
     else
         printf("Not a strong number!");




}

