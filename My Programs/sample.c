#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    int a[100],n,key,i,f,l,m,found=0;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Please enter array elements in ascending order\n");
    for(i=0; i<n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter element to be search");
    scanf("%d",&key);
 
    f=0;
    l=n-1;
    while(f<=l)
    {
        m=(f+l)/2;
        if(a[m]==key)
        {
            printf("Element found at position %d",m+1);
            found=1;
            break;
        }
        if(a[m]>key)
            l=m-1;
        else
            f=m+1;
    }
    if(!found)
        printf("No such element is found");
    return 0;
}