// Print whether number is even or odd
// Date : 30-SEP-2023

#include <stdio.h>

void main()
{
    int n;

    printf("Enter Number:");
    scanf("%d",&n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

