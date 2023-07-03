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
    int n,a[20],i,j,count;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        printf("occurence of %d = %d\n",a[i],count);
    }


}