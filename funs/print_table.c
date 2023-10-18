// create a function to print table

#include <stdio.h>

void table(int num, int len)
{
 int i;

    for(i = 1; i <= len; i ++)
       printf("%3d * %2d = %5d\n", num, i,  num * i);
}

void main()
{

    table(15, 10);
    table(25, 5);

}
