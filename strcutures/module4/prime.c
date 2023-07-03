#include <stdio.h>
int main()
{
    int n,a[20],i,j,flag;
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
        flag=0;
        for(j=2;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("%d\n",a[i]);
        }
        
    }

}