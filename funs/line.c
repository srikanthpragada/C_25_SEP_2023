// print line and message

#include <stdio.h>

void line()
{
 int i;

    for(i = 1; i <= 25; i ++)
        putch('*');
}

void main()
{

    line(); // call function
    printf("\nSrikanth Technologies\n");
    line();

}
