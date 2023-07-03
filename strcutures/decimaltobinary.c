#include <stdio.h>
int main()
{
    int dec, bin[100],n,i;
    system("clear");
    printf("Enter decimal number: ");
    scanf("%d",&dec);
    for(i=0;dec!=0;i++)
    {
        bin[i]=dec%2;  
        dec/=2;
    }
    n=i;
    for(i=0;i<n;i++)
    {
        printf("%d",bin[n-i-1]);
    }
}