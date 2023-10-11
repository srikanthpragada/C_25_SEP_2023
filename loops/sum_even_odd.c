// Print sum of even and odd numbers
// Date : 11-OCT-2023

#include <stdio.h>

void main()
{
    int i, num, even_total = 0, odd_total = 0;


     for(i = 1; i <= 5; i ++)
     {
        printf("Enter number :");
        scanf("%d",&num);

        if(num % 2 == 0)
             even_total += num;
        else
             odd_total += num;
     }

     printf("Even Total = %d, Odd Total = %d", even_total, odd_total);
}

