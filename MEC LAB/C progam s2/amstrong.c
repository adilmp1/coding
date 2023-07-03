#include<stdio.h>
#include<math.h>
int main()
{
	int sum,n1,n2,a,b,dig;
	printf("Enter a number: ");
	scanf("%d",&n1);
	sum=0;
	a=n1;
	n2=n1;
	b=0;
	while(a!=0)
	{
		b++;
		a/=10;
	}
	while (n1!=0)
	{
		dig=n1%10;
		sum=sum+pow(dig,b);
		n1/=10;
	}
	if (n2==sum)
		printf("Entered number is amstrong");
	else
		printf("Entered number is not amstrong");
	return 0;
}	
		
