// create a function to print factors for the given number

#include <stdio.h>


void main()
{

    factors(1245);
    printf("\nThe End!");

}


void factors(int num)
{
 int i, found = 0;

    for(i = 2; i <= num/2; i ++) {
      if(num % i == 0) {
          printf("%d ", i);
          found = 1;
      }
    } // for

    if(!found)
        printf("No factors found!");
}
