#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50],n,i,j,occ,k;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        occ=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j+1])
            {
                occ++;
            }
        }
        printf("The number of occurences of the number %d = %d\n",a[i],occ);
        

    }

}