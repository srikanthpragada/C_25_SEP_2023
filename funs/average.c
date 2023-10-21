#include <stdio.h>

// Function declaration or prototype declaration
float average (int, int);

void main()
{
   int x = 10, y = 15;
   float avg;

     avg = average(x, y);
     printf("%f ", avg);
}

// Function definition
float average(int a, int b)
{
  return  (a + b) / 2.0;
}
