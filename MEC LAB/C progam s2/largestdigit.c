#include <stdio.h>
int main()
{
    int n,digit,digit1,i,pos;
    printf("Enter a number: ");
    scanf("%d",&n);
    int n1=n;
    int max=0;
    int count=0;
    while(n1!=0)
    {
        digit1=n1%10;
        count++;
        n1/=10;
    }
    printf("\nnumber of digits =  %d",count);
    for(i=0;n!=0;i++)
    {
        digit=n%10;
        if(max<digit)
        {
            pos=i;
            max=digit;
        }
        n/=10;
    }
    printf("\nLargest digit is %d occurs at position %d",max,(count-pos));

}