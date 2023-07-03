#include <stdio.h>
#include <stdlib.h>
int search(int str[50],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(str[i]==key)
        {
            printf("%d is found at position %d\n",key,i+1);
        }

    }
}
int main()
{ 
    int as[50],n,key,i;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&as[i]);
    }
    printf("Enter the element ot search: ");
    scanf("%d",&key);
    search(as,n,key);
}