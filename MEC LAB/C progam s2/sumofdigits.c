#include<stdio.h>
int main()
{
	int sum, n1, n2, digit;
	printf("Enter a number: ");
	scanf("%d",&n1);
	n2=n1;
	sum=0;
	while(n1!=0)
	{
		digit=n1%10;
		sum+=digit;
		n1/=10;
	}
	printf("The sum of digits of the number %d = %d",n2,sum);
	return 0;
}	
		
