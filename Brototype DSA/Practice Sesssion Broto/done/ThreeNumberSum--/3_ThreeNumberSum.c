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
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
void threeNumberSum(int a[],int n,int key)
{
    int *first, *last,element;
    int i=0;
    while(i<n)
    {
        element=a[i];
        first=a+i+1;
        last=a+n-1;
        while(*first<*last)
        {
            if((element+*first+*last)==key)
            {
                printf("\n%d %d %d",element,*first,*last);
                first++;
                last--;
            }
            else if((element+*first+*last)>key)
            {
                last--;
            }
            else
            {
                first++;
            }
        }
        i++;
    }
}
int main()
{
    int n,i,j,k,key;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printf("Enter target: ");
    scanf("%d",&key);
    bubblesort(a,n);
    threeNumberSum(a,n,key);
    

}