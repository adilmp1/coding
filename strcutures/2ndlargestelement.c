#include <stdio.h>
int main()
{
    int a[100],n,la1=0,la2=0,i;
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
        if(la1<a[i])
        {
            la1=a[i];
        }
    }
    printf("The largest number = %d\n\n",la1);

    for(i=0;i<n;i++)
    {
        if(a[i]==la1)
        {
            continue;
        }
        if(la2<a[i])
        {
            la2=a[i];
        }
    }

    printf("The second largest number = %d",la2);


}