#include <stdio.h>
int main()
{
    int i;
    int a=0,b=1,c=0;
    for(i=1;i<=11;i++)
    {
        a=b+c;
        printf("%d\n",a);
        b=c;
        c=a;
    }
    return 0;
}