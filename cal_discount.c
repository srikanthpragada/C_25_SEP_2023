// Print discount @ 15% for the given price
// Date : 28-SEP-2023

#include <stdio.h>

void main()
{
    int price, discount;

    // Input
    printf("Enter price :");
    scanf("%d",&price);

    // Process
    discount = price * 15 / 100;

    // Output
    printf("Discount = %d", discount);

}
