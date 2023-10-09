// Calculate wage
// Date : 09-OCT-2023

#include <stdio.h>

void main()
{
    int day, wage;

    printf("Enter Day of the week [1-7]:");
    scanf("%d",&day);

    switch(day)
    {

    case 1:
    case 2:
    case 3: wage = 100; break;
    case 4:
    case 5: wage = 125; break;
    case 6: wage = 150; break;
    default: wage = 200;
   }

   printf("Wage per hour = %d", wage);
}

