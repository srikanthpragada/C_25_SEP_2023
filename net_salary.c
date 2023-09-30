// Print net salary by taking basic salary
// Date : 30-SEP-2023

#include <stdio.h>

void main()
{
    int basic, hra, da, it, gross_salary, net_salary;

    printf("Enter Basic Salary :");
    scanf("%d",&basic);

    hra = basic * 30 / 100;
    da = basic * 20 / 100;
    gross_salary = basic + hra + da;
    it = gross_salary * 10 / 100;
    net_salary = gross_salary - it;

    printf("Basic Salary    : %6d\n", basic);
    printf("+ HRA           : %6d\n", hra);
    printf("+ DA            : %6d\n", da);
    printf("Gross Salary    : %6d\n", gross_salary);
    printf("- IT            : %6d\n", it);
    printf("Net Salary      : %6d\n", net_salary);
}

