// Write Products into products.dat

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
 struct product products[] =
        {
            {"iPhone 15", 100000},
            {"Powerbeats", 25000},
            {"Airpods", 20000},
            {"Samsung Fold", 120000},
            {"iPad Air 2", 45000}
        };

    fp = fopen(FILENAME, "wb"); // read text

    if(fp == NULL)
    {
        printf("Sorry! File cannot be created!");
        exit(1); // terminate program with error
    }

    fwrite(products, sizeof(struct product), 5, fp);

    fclose(fp);
}
