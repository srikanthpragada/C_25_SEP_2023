// Print whether a number is prime or not
// Date : 10-OCT-2023

#include <stdio.h>

void main()
{
    int num, i, prime = 1;

     printf("Enter number :");
     scanf("%d",&num);

     for(i = 2; i <= num / 2; i ++)
     {
       if(num % i == 0)
       {
           printf("Not prime!");
           prime = 0;
           break;  // terminate loop
       }
     }

     if(prime)
        printf("Prime!");


}

