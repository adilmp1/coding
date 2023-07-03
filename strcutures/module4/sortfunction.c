#include <stdio.h>
int bub(int b[],int d)
{
    int i,j,temp;
    for(i=0;i<d-1;i++)
    {
        for(j=0;j<d-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
            }
        }
    }   

    for(i=0;i<d;i++)
    {
        printf("%d\t",b[i]);
    }

}
int main()
{
    int n,i,a[50];
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    bub(a,n);

}