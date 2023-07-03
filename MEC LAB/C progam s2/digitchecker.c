#include<stdio.h>
int main()
{
	int n, b, n2, digit, a=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	b=n;
	printf("Enter a number to check: ");
	scanf("%d",&n2);
	while (n!=0)
	{
		digit=n%10;
		if(digit==n2)
		{
			printf("%d contains %d", b, n2);
			a=1;
			break;
		}
		n/=10;
	}
	if(a==0)
		printf("%d doesn't contain %d",b, n2);
}			
	
