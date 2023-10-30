#include <stdio.h>

enum weeks {MON,TUE,WED,THU,FRI,SAT};
enum boolean {FALSE, TRUE};

void main()
{
  int week = MON;
  int done = FALSE;

   printf("%d ", week);

   if(week == MON)
       printf("Yes. Monday!");
   else
       printf("No. Not Monday!");

}
