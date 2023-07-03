#include <stdio.h>
int main()
{
    int a[20],i,key,n,flag=0;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter Search key: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            printf("%d is found at %d",key,i);
            break;
        }
    }
    if(flag==0)
    {
        a[n]=key;
        printf("array is updated\n");
        for(i=0;i<=n;i++)
        {
            printf("%d\n",a[i]);
        }
    }

}