#include <stdio.h>
int main()
{
    int p[20],i,j,n,temp;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j+1);
                *(p+j+1)=*(p+j);
                *(p+j)=temp;
            }
        }   
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
}