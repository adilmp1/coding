#include <stdio.h>
#include <math.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],n,i,j,num=0;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    readArray(a,n);
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        num=num+pow(10,j)*a[i];
    }
    printf("%d",num+1);
    
}