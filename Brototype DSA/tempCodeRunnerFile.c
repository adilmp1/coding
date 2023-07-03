#include <stdio.h>
int n=9;
void heapify(int a[], int i, int n)
{
    int smallest, child1, child2,temp;
    smallest=i;
    child1 = 2*i+1;
    child2 = 2*i+2;

    if(child1<n && a[child1]<a[smallest])
    {
        smallest=child1;
    }
    if(child2<n && a[child2]<a[smallest])
    {
        smallest=child2;
    }

    if(smallest!=i)
    {
        temp=a[smallest];
        a[smallest]=a[i];
        a[i]=temp;
        heapify(a,smallest,n);   
    }

}
void buildHeap(int a[], int n)
{
    int i;
    for(i=n/2;i>=0;i--)
    {
        heapify(a,i,n);
    }
}
void printArray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d - %d\n",i,a[i]);
    }
}
void remove(int a[], int data, int n)
{
    if(n==0)
    {
        printf("Heap is empty");
    }
}
int main()
{
    int a[9]={19,1,2,3,36,25,100,17,7};
    buildHeap(a,n);
    printArray(a,n);
    remove(a,36,n);
}