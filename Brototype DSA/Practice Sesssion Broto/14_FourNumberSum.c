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
void fourNumberSum(int a[],int n,int target)
{
    int *first, *last,element,element0;
    int i=0,j;
    while(i<n)
    {
        element0=a[i];
        j=i+1;
        while(j<n)
        {
            element=a[j];
            first=a+j+1;
            last=a+n-1;
            while(first<last)
            {
                if((element+*first+*last)==(target-element0))
                {
                    printf("\n%d %d %d %d",element0,element,*first,*last);
                    first++;
                    last--;
                }
                else if((element+*first+*last)>(target-element0))
                {
                    last--;
                }
                else
                {
                    first++;
                }
            }
            j++;
        }   
        i++;
    }
}
int main()
{
    int n,target;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printf("Enter sum: ");
    scanf("%d",&target);

    // int n=4,target=4;
    // int a[4]={1,1,1,1};
    // system("clear");

    // int n=8,target=16;
    // int a[]={1,2,3,4,5,9,7,8};
    // system("clear");

    // int n=8,target=23;
    // int a[]={10, 2, 3, 4, 5, 9, 7, 8};
    // system("clear");

    bubblesort(a,n);
    fourNumberSum(a,n,target);
}