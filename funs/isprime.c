// create a function to return largest of an array
#include <stdio.h>

void main()
{
 int a[] = {15, 27, 29, 37, 83};
 int i;

   for(i = 0; i < 5; i ++)
   {
     if (isprime(a[i]))
       printf("%d ", a[i]);
   }
}


int isprime(int n)
{
 int i;

    for(i = 2; i <= n/2; i++)
    {
       if (n % i == 0)
           return 0; // false
    }

    return 1; // true
}
