#include <stdio.h>
int main()
{
    int n,i,key,flag=0;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Enter the search element: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        printf("%d",-1);
    }
}