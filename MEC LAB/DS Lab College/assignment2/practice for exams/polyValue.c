#include <stdio.h>
#include <math.h>
typedef struct{
    int coeff;
    int exp;
}poly;
void readPoly(poly a[],int start, int end)
{
    int i;
    printf("Enter the coefficients and the exponents of the polynomial: ");
    for(i=start;i<=end;i++)
    {
        scanf("%d",&a[i].coeff);
        scanf("%d",&a[i].exp);
    }
}
void printPoly(poly a[],int start, int end)
{
    int i;
    for(i=start;i<=end;i++)
    {   
        printf("%dx^%d",a[i].coeff,a[i].exp);
        if(i!=end)
        {
            printf(" + ");
        }
    }
    printf("\n");

}

void polyValue(poly a[],int start, int end, int x)
{
    int i,value=0;
    for(i=start;i<=end;i++)
    {
        value+=a[i].coeff*pow(x,a[i].exp);
    }
    printf("P(%d) = %d",x,value);
}
int main()
{
    poly a[100];
    int n,x;
    system("clear");
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d",&n);
    readPoly(a,0,n-1);
    printPoly(a,0,n-1);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    polyValue(a,0,n-1,x);
}