#include <stdio.h>
typedef struct{
    int coeff;
    int exp;
}poly;
void readPoly(poly a[],int start, int end,int no)
{
    int i;
    printf("Enter the coefficients and the exponents of the polynomial %d: ",no);
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

void polyAdd(poly a[],int startA,int endA,int startB,int endB,int startD, int * end)
{
    int endD = *end;
    void addA()
    {
        a[endD].exp=a[startA].exp;
        a[endD].coeff=a[startA].coeff;
        startA++;
        endD++;
    }
    void addB()
    {
        a[endD].exp=a[startB].exp;
        a[endD].coeff=a[startB].coeff;
        startB++;
        endD++;
    }
    while(startA<=endA && startB<=endB)
    {
        if(a[startA].exp>a[startB].exp)
        {
            addA();
        }
        else if(a[startA].exp<a[startB].exp)
        {
            addB();
        }
        else
        {
            a[endD].exp=a[startB].exp;
            a[endD].coeff=a[startB].coeff+a[startA].coeff;
            startA++;
            startB++;
            endD++;
        }
    }

    while(startA<=endA)
    {
        addA();
    }
    while(startB<=endB)
    {
        addB();
    }
    *end = endD-1;
}
int main()
{
    poly a[100];
    int startA, startB, endA, endB, startD, endD, n1, n2;
    system("clear");
    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d",&n1);
    printf("Enter the number of terms in the second polynomial: ");
    scanf("%d",&n2);
    startA=0,endA=n1-1,startB=n1,endB=n1+n2-1,startD=n1+n2,endD=n1+n2;
    readPoly(a,startA,endA,1);
    printPoly(a,startA,endA);
    readPoly(a,startB,endB,2);
    printPoly(a,startB,endB);
    polyAdd(a,startA,endA,startB,endB,startD,&endD);
    printf("Sum of polynomials = \n");
    printPoly(a,startD,endD);
}