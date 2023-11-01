// Read Products from products.dat

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
 int count;


    fp = fopen(FILENAME, "rb"); // read text

    if(fp == NULL)
    {
        printf("Sorry! File cannot be opened!");
        exit(1); // terminate program with error
    }

    while(1)
    {
        count = fread(&p, sizeof(struct product), 1, fp);
        if(count == 0) // EOF
            break;

        printf("%-50s  %6d\n", p.name, p.price);
    }

    fclose(fp);
}
