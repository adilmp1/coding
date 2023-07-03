#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a1[50],a2[50],m,n,i,j,flag;
    system("clear");
    printf("Enter the number of elements in first set: ");
    scanf("%d",&m);
    readArray(a1,m);
    int c=m;

    printf("Enter the number of elements in second set: ");
    scanf("%d",&n);
    readArray(a2,n);    

    for(i=0;i<n;i++)
    {
        flag=1;
        for(j=0;j<m;j++)
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

    printf("After union\n");
    printArray(a1,c);
}