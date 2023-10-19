// create a function to return sum of an array
#include <stdio.h>

void main()
{
  int a[] = {10,44,55,66,78};


     printf("Sum = %d",sum(a));
}


int sum(int a[5])
{
 int i, total = 0;

    for(i = 0; i < 5; i++)
        total += a[i];

    return total;
}
