// create a function to print an in reverse

#include <stdio.h>

void main()
{
  int a[] = {1,2,3,4,5};

   print_reverse(a);

}


void print_reverse(int arr[5])
{
 int i;

    for(i = 4; i >= 0; i--)
       printf("%d ", arr[i]);
}
