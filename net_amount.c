// Print net amount by taking qty and price
// Date : 29-SEP-2023

#include <stdio.h>

void main()
{
    int price, qty, amount, discount, net_amount;


    printf("Enter price :");
    scanf("%d",&price);

    printf("Enter qty   :");
    scanf("%d",&qty);


    amount = price * qty;
    discount =   amount * 20 / 100;
    net_amount = amount - discount;

    // Output
    printf("Amount     : %6d\n", amount);
    printf("- Discount : %6d\n", discount);
    printf("Net Amount : %6d\n", net_amount);
}

