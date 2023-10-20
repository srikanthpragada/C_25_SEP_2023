// create a function to return position of a number in an array
#include <stdio.h>

void main()
{
 int a[] = {15, 27, 29, 37, 37};

   printf("Found at %d\n", search(a,37));
   printf("Found at %d\n", search(a,20));

}


int search(int a[5], int n)
{
 int i;

    for(i = 0; i < 5; i++)
    {
       if (a[i] == n)
           return i; // found
    }

    return -1;  // not found
}
