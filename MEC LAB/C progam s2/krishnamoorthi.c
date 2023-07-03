#include<stdio.h>
int fact(int num)
{
	if (num==0 || num==1)
		return 1;
	else
		return (num*fact(num-1));
}
	
int main()
{
	int n1,n2, digit;
	printf("Enter a number: ");
	scanf("%d",&n1);
	n2=n1;
	int sum=0;
	while(n1!=0)
	{
		digit=n1%10;
		sum+=fact(digit);
		n1/=10;
	}
	if (n2==sum)
		printf("%d is krishnamoorthi number",n2);
	else 
		printf("%d is not krishnamoorthi number",n2);	
	return 0;
}	
		
