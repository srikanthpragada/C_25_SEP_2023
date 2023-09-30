// Print result based on marks
// Date : 30-SEP-2023

#include <stdio.h>

void main()
{
    int marks;

    printf("Enter Marks:");
    scanf("%d",&marks);

    if(marks >= 50)
        printf("Pass");
    else
        printf("Fail");
}

