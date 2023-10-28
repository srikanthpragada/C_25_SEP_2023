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

struct time get_random_time()
{
    struct time t;

       t.h = rand() % 24;
       t.m = rand() % 60;
       t.s = rand() % 60;
       return t;
}

void main()
{
   struct time times[5];
   int i;
   struct time largest = {0,0,0};

        srand(time(0));
        for(i = 0; i < 5; i ++)
        {
            times[i] = get_random_time();
            print_time(times[i]);
            putch('\n');
            if (compare(times[i], largest) > 0)
                largest = times[i];
        }

        printf("\nLargest time = ");
        print_time(largest);
}
