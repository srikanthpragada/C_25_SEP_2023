
void print_str_reverse(char st[])
{
  int i;

     for(i = strlen(st)-1; i >= 0; i --)
        putch(st[i]);
}


void main()
{
    int a[5];
    int * p;

     //a = 100;
     p = a;
     *p = 0;
     print_str_reverse("Hello!");

}
