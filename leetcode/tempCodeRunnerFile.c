#include <stdio.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void sort012(int a[], int n)
{
  int i, k = 0;
  for (i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      swap(a + k, a + i);
      k++;
    }
  }
}
int main()
{
  int a[]={0,0,6,1,2,3,1,0,0};
  int n=9;

  sort012(a,n);
  display(a,n);
}