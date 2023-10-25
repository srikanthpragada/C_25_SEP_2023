
void print_array(int a[], int size)
{
  int i;

     for(i = 0; i < size; i ++)
        printf("%d\n", a[i]);
}


void main()
{
 int a1[10], a2[5] = {1,2,3,4,5};

     print_array(a1, 5);
     print_array(a2, 5);

}
