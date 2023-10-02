// Print largest of 3 numbers
// Date : 02-OCT-2023

#include <stdio.h>

void main()
{
    int n1, n2, n3;

    printf("Enter 3 Numbers:");
    scanf("%d%d%d",&n1, &n2, &n3);

    if(n1 > n2 && n1 > n3)
        printf("%d", n1);
    else
        if (n2 > n3)
           printf("%d", n2);
        else
           printf("%d", n3);

}

