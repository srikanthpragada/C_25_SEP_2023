// print line with given char and message

#include <stdio.h>
void line(char ch, int len)
{
 int i;

    for(i = 1; i <= len; i ++)
        putch(ch);
}

void main()
{

    line('*', 20); // call function
    printf("\nSrikanth Technologies\n");
    line('.', 25);

}
