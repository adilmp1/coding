#include <stdio.h>
typedef struct 
{
    int coeff;
    int exp;
}term;
void readPoly(term a[],int start, int end)
{
    int i;
    printf("Enter the coefficients and powers decreasing order: ");
    for(i=start;i<=end;i++)
    {
        scanf("%d",&a[i].coeff);
        scanf("%d",&a[i].exp);
    }
}
void printPoly(term a[], int start, int end)
{
    int i;
    for(i=start;i<=end;i++)
    {
        // if(a[i].coeff==1)
        // {
        //     printf("x^%d",a[i].exp);
        // }
        if(a[i].exp==0)
        {
            printf("%d",a[i].coeff);
        }
        else if(a[i].exp==1)
        {
            printf("%dx",a[i].coeff);
        }
        else
        {
            printf("%dx^%d",a[i].coeff,a[i].exp);   
        }
        if(i!=end)
        {
            printf(" + ");
        }
    }
}
void polyAdd(term a[],int startA,int endA,int startB,int endB,int *e)
{
    int end = *e;
    void addB()
    {
        a[end].exp = a[startB].exp;
        a[end].coeff = a[startB].coeff;
        startB++;
        end++;
    }
    void addA()
    {
        a[end].exp = a[startA].exp;
        a[end].coeff = a[startA].coeff;
        startA++;
        end++;
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
            a[end].exp = a[startB].exp;
            a[end].coeff = a[startB].coeff+a[startA].coeff;
            startA++;
            startB++;
            end++;
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
    *e = end-1;
}
int main()
{
    int n1,n2,startA,startB,endA,endB,startC,end;
    term a[100];
    system("clear");
    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d",&n1);
    printf("Enter the number of terms in the second polynomial: ");
    scanf("%d",&n2);
    startA = 0,endA=n1-1,startB=n1, endB = n1+n2-1,startC = n1+n2;
    end = startC;
    readPoly(a,startA,endA);
    printPoly(a,startA,endA);
    printf("\n");
    readPoly(a,startB,endB);
    printPoly(a,startB,endB);
    printf("\n");
    polyAdd(a,startA,endA,startB,endB,&end);
    printPoly(a,startC,end);
    

}
