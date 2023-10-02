// Print whether 3 numbers are equal
// Date : 02-OCT-2023

#include <stdio.h>

void main()
{
    int n1, n2, n3;

    printf("Enter 3 Numbers:");
    scanf("%d%d%d",&n1, &n2, &n3);

    if(n1 == n2 && n1 == n3)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
}

