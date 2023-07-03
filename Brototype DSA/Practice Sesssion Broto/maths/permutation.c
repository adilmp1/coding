#include <stdio.h>
int main()
{
    int count=0,a,b,c,d;
    int i;
    for(i=1000;i<10000;i++)
    {
        if(i%2)
        {
            a=i%10,b=(i/10)%10;c=(i/100)%10,d=i/1000;
            if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d && a!=7 && a!=9 && b!=7 && b!=9 && c!=7 && c!=9 && d!=7 && d!=9)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}