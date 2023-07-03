#include <stdio.h>
#include <stdlib.h>
int bub(int str[20],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",str[i]);
    }
}
int main()
{
    int n,a[100],i,j,temp;
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
