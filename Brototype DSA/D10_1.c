#include <stdio.h>
#include <stdlib.h>
int n=0;
void insert(int a[], int data)
{
    int chi, par, temp;
    if(n==10)
    {
        printf("Heap is FULL");
        exit(0);
    }
    chi=n;
    a[chi]=data;
    par=(chi-1)/2;
    while(chi!=0 && a[chi]<a[par])
    {
        temp = a[chi];
        a[chi]=a[par];
        a[par]=temp;
        chi=par;
        par = (chi-1)/2;
    }
    n++;
}
void printArray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
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
void deleteRoot(int a[])
{
    if(n==0)
    {
        printf("heap is empty");
        exit(0);
    }
    a[0]=a[n-1];
    heapify(a,0,n);
    n--;
}
int main()
{
    int a[10];
    system("clear");
    insert(a,8);
    insert(a,10);
    insert(a,40);
    insert(a,15);
    insert(a,20);
    insert(a,22);
    insert(a,18);
    insert(a,16);
    insert(a,30);
    printArray(a,n);
    printf("\n");
    deleteRoot(a);
    printArray(a,n);
    
}