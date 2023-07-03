#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=30000;i++)
    {
        if(i%6==0 && i%7==0 && i%8==0 && i%9==0 && i%10==0)
        {
            printf("%d\n",i);
        }
    }
}