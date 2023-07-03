#include <stdio.h>
int main()
{
    int n,a,b,c;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    a=0;b=1;c=0;
    for(int i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",a);
    }
    

}