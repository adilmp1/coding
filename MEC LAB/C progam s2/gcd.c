#include<stdio.h>
int main()
{	
	int a,b,r;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	int n1=a;
	int n2=b;
	while(r!=0)
	{
		r=a%b;
		a=b;
		b=r;		
	}
	printf("GCD of %d and %d = %d",n1,n2,a);
	
	return 0;
}		
