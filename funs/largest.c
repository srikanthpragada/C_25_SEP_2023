// create a function to return largest of an array
#include <stdio.h>

void main()
{
  int a[] = {10,44,55,66,8};

     printf("Largest = %d", largest(a));
}


int largest(int a[5])
{
 int i, lv = a[0];

    for(i = 1; i < 5; i++)
    {
       if (a[i] > lv)
            lv = a[i];
    }

    return lv;
}
