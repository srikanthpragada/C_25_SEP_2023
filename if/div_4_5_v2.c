// Print whether number is divisible by 4 and 5 using nested if statements
// Date : 03-OCT-2023
#include <stdio.h>

void main()
{
    int num;

    printf("Enter Number :");
    scanf("%d",&num);

    if(num % 4 == 0)
    {
        if(num % 5 == 0)
             printf("Both");
        else
             printf("Only by 4");
    }
    else
    {
      if(num % 5 == 0)
        printf("Only by 5");
      else
        printf("None");
    }
}

