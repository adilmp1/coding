#include <stdio.h>
void readArray(int a[], int n)
{
    int i;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void printArray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if (left < n && a[left] > a[largest])
    {
        largest = left;
    }

    if (right<n && a[right]>a[largest])
    {
        largest = right;
    }
 
    if (largest != i) {
 
        swap(&a[i], &a[largest]);
 
        heapify(a, n, largest);
    }
}
 
void heapSort(int a[], int n)
{
 
    for (int i=n/2-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
    for (int i = n - 1; i >= 0; i--) 
    {
        swap(a,a+i);
        heapify(a,i,0);
    }
}
int main()
{
    int n;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    
    // int a[] = {5,2,1,4,8};
    // int n=5;
    // system("clear");

    heapSort(a,n);
    printArray(a,n);
}