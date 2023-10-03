// Print net salary
// Date : 03-OCT-2023

#include <stdio.h>

void main()
{
    int salary, grade, hra, da, pf, net_salary;

    printf("Enter Salary :");
    scanf("%d",&salary);

    printf("Enter Grade [1/2] :");
    scanf("%d",&grade);

    if(grade == 1)
    {
        hra = salary * 30 / 100;
        da = salary * 25 / 100;
        pf = salary * 5 / 100;
    }
    else
    {
        hra = salary * 25 / 100;
        da = salary * 15 / 100;
        pf = salary * 3 / 100;
    }

    net_salary = salary + hra + da - pf;
    printf("Net Salary : %d", net_salary);
}

