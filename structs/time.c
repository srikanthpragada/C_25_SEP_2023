#include <stdio.h>

struct time
{
  int h, m, s;
};

void print_time(struct time t)
{
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

int total_seconds(struct time t)
{
    return  t.h * 3600 + t.m * 60 + t.s;
}

int compare(struct time t1, struct time t2)
{
    return  total_seconds(t1) - total_seconds(t2);
}

struct time next_second(struct time t)
{
   t.s ++;
   if(t.s > 59)
   {
       t.s = 0;
       t.m ++;
       if(t.m > 59)
       {
           t.m = 0;
           t.h ++;

           if(t.h > 23)
              t.h = 0;
       }
   }
   return t;
}

void main()
{
    struct time t =  {15, 55, 59};
    struct time t2 = {15, 20, 10};

    struct time t3 = next_second(t);
    print_time(t3);

    /*
     print_time(t);
     printf("\nTotal Seconds = %d", total_seconds(t));
     printf("\nCompare : %d", compare(t, t2));
    */

}
