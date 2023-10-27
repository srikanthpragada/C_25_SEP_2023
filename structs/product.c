#include <stdio.h>

struct product
{
  int prodno;
  char name [30];
  int price, qty;
};


void main()
{
   struct product p;

      printf("Enter product no.  :");
      scanf("%d",&p.prodno);

      fflush(stdin);

      printf("Enter product name :");
      gets(p.name);

      printf("Enter product price:");
      scanf("%d",&p.price);

      printf("Enter product qty  :");
      scanf("%d",&p.qty);

      printf("Product Number  : %d\n", p.prodno);
      printf("Product Name    : %s\n", p.name);
      printf("Product Price   : %d\n", p.price);
      printf("Product Qty     : %d\n", p.qty);
      printf("Selling Price   : %d\n", p.price + p.price * 12 / 100);

}
