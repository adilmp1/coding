#include <stdio.h>
void readArray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
}
int main()
{
    int a1[50],a2[50],m,n,i,j;
    system("clear");
    printf("Enter the number of elements in first set: ");
    scanf("%d",&m);
    readArray(a1,m);

    printf("Enter the number of elements in second set: ");
    scanf("%d",&n);
    readArray(a2,n);    

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a2[i]==a1[j])
            {
                printf("%d\n",a2[i]);
            }
        }
    }
    
}