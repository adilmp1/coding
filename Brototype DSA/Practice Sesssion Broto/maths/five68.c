#include <stdio.h>
int main()
{
    int i,count=0;
    for(i=1;i<=1000;i++)
    {
        if(i%5==0 && i%8==0 && i%6==0)
        {
            count++;
        }
    }
    printf("%d",count);
}