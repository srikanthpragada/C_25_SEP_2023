// Display details of a product from products.dat by taking product id

#include <stdio.h>

struct product
{
    char name[50];
    int price;
};

#define FILENAME  "products.dat"

void main()
{
 FILE * fp;
 struct product p;
 int count, pos, prodid;

    fp = fopen(FILENAME, "rb"); // read text

    if(fp == NULL)
    {
        printf("Sorry! File cannot be opened!");
        exit(1); // terminate program with error
    }

    while(1)
    {
        printf("Enter product id [0 to stop]:");
        scanf("%d", &prodid);

        if(prodid == 0)
            break;

        pos = (prodid - 1) * sizeof(struct product);

        fseek(fp, pos, SEEK_SET);

        count = fread(&p, sizeof(struct product), 1, fp);

        if(count == 1)
            printf("%-50s  %6d\n", p.name, p.price);
        else
            printf("Product Id Not Found!\n");
    }

    fclose(fp);
}
