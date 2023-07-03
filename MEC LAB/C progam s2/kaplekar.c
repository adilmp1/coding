#include <stdio.h>
int main()
{
    int i,n1,n2;
    for(i=32;i<100;i++)
    {
        n1=(i*i)%100;
        n2=(i*i)/100;
        if(n1+n2==i)
        {
            printf("%d\n",i);
        }

    }
}