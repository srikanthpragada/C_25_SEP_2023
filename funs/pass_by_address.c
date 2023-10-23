// Pass by address/reference

void zero(int * a, int * b)
{
   *a = 0;
   *b = 0;
}

void main()
{
  int x = 10, y = 20;

     zero(&x, &y);

     printf("%d %d", x, y);
}
