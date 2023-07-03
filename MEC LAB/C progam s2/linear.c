#include<stdio.h>
 
int main()
{
    int a[100],n,key,i,found=0;
 
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Please enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
    	if(a[i]==key)
    	{
            found=1;
            break;
    	}
    }
    if(found==1)
        printf("Element is found at position %d",i+1);
    else
        printf("Element is not found");
    return 0;
}
