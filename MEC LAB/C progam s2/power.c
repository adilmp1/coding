#include <stdio.h>
#include <stdlib.h>
float power(int a,int b)
{
    int i;
    int f=1;float c;
    if(b>=0)
    {
        for(int i=1;i<=b;i++)
        {
            f*=a;
        }
        return f;
    }
    else
    {
        for(int i=1;i<=-b;i++)
        {
            f*=a;
        }
        c=1/(float)f;
        return c;
    }
}
int main()
{
    int x,n;
    system("clear");
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&n);
    printf("%d^%d = %f\n\n",x,n,power(x,n));
    return 0;

}