#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter a,b and c ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0)
    {
        printf("a cannot be 0");
        exit(0);
    }
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        r1=(-b/(2*a));
        r2=r1;
        printf("Root1 = Root2 = %f",r1);
    }
    else if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Root1= %f",r1);
        printf("Root2= %f",r2);
    }
    else if(d<0)
    {
        float real=-b/(2*a);
        float img=sqrt(d)/(2*a);
        r1=real+img;
        r2=real-img;
        printf("Root1= %f",r1);
        printf("Root2= %f",r2);
    }
    
}
