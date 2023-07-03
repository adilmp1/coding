#include <stdio.h>
int main()
{
    int count=0,a,b,c,d;
    int i;
    for(i=100;i<999;i++)
    {
        if(i%2==0)
        {
            a=i%10,b=(i/10)%10;c=i/100;
            if(a!=b && a!=c && b!=c && a!=0 && a!=1 && a!=4 && a!=9 && b!=0 && b!=1 && b!=4 && b!=9 && c!=0 && c!=1 && c!=4 && c!=9)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}