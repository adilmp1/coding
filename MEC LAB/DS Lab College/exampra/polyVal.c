#include <stdio.h>
#include <math.h>
typedef struct
{
    int coeff;
    int exp;
}term;
void readPoly(term a[],int n)
{
    int i;
    printf("Enter the coefficients and powers decreasing order: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i].coeff);
        scanf("%d",&a[i].exp);
    }
}
void polyVal(term a[],int n, int x)
{   
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i].coeff*pow(x,a[i].exp);
    }
    printf("%d",sum);
}
int main()
{
    term a[100];
    int n,x;
    system("clear");
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    readPoly(a,n);
    printf("Enter value of x: ");
    scanf("%d",&x);
    polyVal(a,n,x);
}