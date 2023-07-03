#include <stdio.h>
void readArray(int a[], int n)
{
    int i;
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

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
void coSort(int array[], int size, int place) {
  int output[size + 1];
  int max = (array[0] / place) % 10;

  for (int i = 1; i < size; i++) {
    if (((array[i] / place) % 10) > max)
      max = array[i];
  }
  int count[max + 1];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  // Calculate count of elements
  for (int i = 0; i < size; i++)
    count[(array[i] / place) % 10]++;
    
  // Calculate cumulative count
  for (int i = 1; i < 10; i++)
    count[i] += count[i - 1];

  // Place the elements in sorted order
  for (int i = size - 1; i >= 0; i--) {
    output[count[(array[i] / place) % 10] - 1] = array[i];
    count[(array[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++)
    array[i] = output[i];
}
void radixSort(int a[], int n)
{
    int max,pos;
    max = maxElement(a,n);
    for(pos=1;(max/pos)>0; pos*=10)
    {
        coSort(a,n,pos);
    }
}
int main()
{
    int a[] = {181, 289, 390, 121, 145, 736, 514, 888, 122};
    int n=9;

    // int a[] = {161, 269, 370, 101, 125, 716, 54, 868, 12}
    // int n=9;
    // system("clear");
    radixSort(a,n);
    printArray(a,n);
    
}