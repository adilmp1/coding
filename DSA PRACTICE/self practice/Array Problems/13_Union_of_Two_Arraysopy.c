#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int arara(int a1[],int a2[],int m,int n)
{
    int i,j,flag;
    int c=n;
    for(i=0;i<m;i++)
    {
        flag=1;
        for(j=0;j<n;j++)
        {
            if(a2[i]==a1[j])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            a1[c]=a2[i];
            c++;
        }
    }

    for(i=0;i<c;i++)
    {
        printf("%d\n",a1[i]);
    }
}
int main()
{
    int a1[50],a2[50],m,n,i,j,flag;
    system("clear");
    printf("Enter the number of elements in first set: ");
    scanf("%d",&n);
    readArray(a1,n);
    int c=n;
    printf("Enter the number of elements in second set: ");
    scanf("%d",&m);
    readArray(a2,m);    
    printf("After union\n");
    arara(a1,a2,m,n);
}