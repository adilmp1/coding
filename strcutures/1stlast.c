#include <stdio.h>
#include <math.h>
int digits(int num)
{
    int re=0;
    while(num!=0)
    {
        re++;
        num/=10;
    }
    return (re-1);
}
int main()
{
    int n,f,l;
    system("clear");
    printf("Enter the number: ");
    scanf("%d",&n);
    f=n/(pow(10,digits(n)));
    l=n%10;
    printf("sum of digits = %d",f+l);

}