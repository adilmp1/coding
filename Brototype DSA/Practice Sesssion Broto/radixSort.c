#include <stdio.h>
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}
int maxElement(int a[], int n)
{
    int i, large = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
    }
    return large;
}
void countSort(int a[], int n, int pos)
{
    int output[n + 1];
    int max = (a[0] / pos) % 10;
    for (int i = 1; i < n; i++) 
    {
        if (((a[i] / pos) % 10) > max)
        {
            max = a[i];
        }
    }
    int count[max + 1];
    for (int i = 0; i < max; ++i)
    {
        count[i] = 0;
    }

  // Calculate count of elements
    for (int i = 0; i < n; i++)
    {
        count[(a[i] / pos) % 10]++;
    }
    
  // Calculate cumulative count
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

  // Place the elements in sorted order
    for (int i = n - 1; i >= 0; i--) 
    {
        output[count[(a[i] / pos) % 10] - 1] = a[i];
        count[(a[i] / pos) % 10]--;
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = output[i];
    }
}
void radixSort(int a[], int n)
{
    int max,pos;
    max = maxElement(a,n);
    for(pos=1;(max/pos)>0; pos*=10)
    {
        countSort(a,n,pos);
    }
}
int main()
{
    int a[] = {181, 289, 390, 121, 145, 736, 514, 888, 122};
    int n=9;
    radixSort(a,n);
    printArray(a,n);
}